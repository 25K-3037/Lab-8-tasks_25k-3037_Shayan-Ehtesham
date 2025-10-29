#include <stdio.h>

int main() {
    // Declare arrays for each class
    int class1[4] = {85, 92, 78, 90};
    int class2[4] = {88, 76, 95, 84};
    int class3[4] = {90, 85, 88, 92};

    // Variables to store sums and averages
    int sum1 = 0, sum2 = 0, sum3 = 0;
    float avg1, avg2, avg3;
    int i;

    // Calculate sum for Class 1
    for(i = 0; i < 4; i++) {
        sum1 += class1[i];
    }
    avg1 = sum1 / 4.0;

    // Calculate sum for Class 2
    for(i = 0; i < 4; i++) {
        sum2 += class2[i];
    }
    avg2 = sum2 / 4.0;

    // Calculate sum for Class 3
    for(i = 0; i < 4; i++) {
        sum3 += class3[i];
    }
    avg3 = sum3 / 4.0;

    // Display results
    printf("Average score for Class 1 = %.2f\n", avg1);
    printf("Average score for Class 2 = %.2f\n", avg2);
    printf("Average score for Class 3 = %.2f\n", avg3);

    return 0;
}

