#include <stdio.h>

int main() {
    int i, j, k;

    // Pattern 1: Star pyramid
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n"); // new line between patterns

    // Pattern 2: Number pyramid
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n"); // new line between patterns

    // Pattern 3: Letter pyramid
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (k = 0; k < 2 * i - 1; k++) {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }

    return 0;
}

