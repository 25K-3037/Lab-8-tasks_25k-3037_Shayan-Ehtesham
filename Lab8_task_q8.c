#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;
    int students = 0;
    int empty = 0;
    int r, c;

    printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");

    /* Generate and print seating chart */
    for (r = 0; r < rows; r++) {
        printf("Row %d ", r + 1);
        for (c = 0; c < cols; c++) {
            if ((r + c) % 2 == 0) {  /* Checkerboard pattern */
                printf("x ");
                students++;
            } else {
                printf("o ");
                empty++;
            }
        }
        printf("\n");
    }

    /* Summary */
    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", rows * cols);

    return 0;
}

