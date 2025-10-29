#include <stdio.h>

int main() {
    // Arrays to store number of photos for each month
    int year1[12] = {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15};
    int year2[12] = {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16};

    // Array of month names for neat display
    char months[12][10] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    int i;

    printf("Photos taken each month:\n\n");

    // Display Year 1 photos
    printf("Year 1:\n");
    for(i = 0; i < 12; i++) {
        printf("%s: %d photos\n", months[i], year1[i]);
    }

    printf("\nYear 2:\n");
    for(i = 0; i < 12; i++) {
        printf("%s: %d photos\n", months[i], year2[i]);
    }

    return 0;
}

