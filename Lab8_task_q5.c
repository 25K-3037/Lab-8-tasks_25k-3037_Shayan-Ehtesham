#include <stdio.h>

int main() {
    // 4x4 grid of temperatures
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    int rows = 4, cols = 4;
    int i, j;

    printf("Cold Spots (colder than all immediate neighbors):\n");

    // Loop through each cell in the grid
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            int current = temp[i][j];
            int isCold = 1; // assume it's a cold spot

            // Check north (i-1, j)
            if (i > 0 && temp[i - 1][j] <= current)
                isCold = 0;

            // Check south (i+1, j)
            if (i < rows - 1 && temp[i + 1][j] <= current)
                isCold = 0;

            // Check west (i, j-1)
            if (j > 0 && temp[i][j - 1] <= current)
                isCold = 0;

            // Check east (i, j+1)
            if (j < cols - 1 && temp[i][j + 1] <= current)
                isCold = 0;

            // If it’s still true ? print cold spot
            if (isCold) {
                printf("Row %d, Column %d  Temperature: %dC\n", i + 1, j + 1, current);
            }
        }
    }

    return 0;
}

