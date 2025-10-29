#include <stdio.h>

int main() {
    int i, j;

    // Pattern 1: Stars
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n"); // Blank line between patterns

    // Pattern 2: Numbers
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n"); // Blank line between patterns

    // Pattern 3: Letters
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}

