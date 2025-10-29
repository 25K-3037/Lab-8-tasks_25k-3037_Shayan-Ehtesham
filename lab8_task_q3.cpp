#include <stdio.h>

int main() {
    // Step 1: Original 4x4 black and white image
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    int inverted[4][4];
    int whiteCount = 0;

    // Step 2: Create inverted image and count white pixels
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            inverted[i][j] = 1 - image[i][j];
            if (image[i][j] == 1)
                whiteCount++;
        }
    }

    // Step 3: Display both images side by side (without \t)
    printf("Original Image        Inverted Image\n");
    printf("--------------        ---------------\n");

    for (int i = 0; i < 4; i++) {
        // Print original image
        for (int j = 0; j < 4; j++) {
            printf("%d ", image[i][j]);
        }

        // Add spaces manually for separation
        printf("        ");

        // Print inverted image
        for (int j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }

        printf("\n");
    }

    // Step 4: Show white pixel count
    printf("\nTotal white pixels in the original image: %d\n", whiteCount);

    return 0;
}

