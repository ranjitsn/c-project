#include <stdio.h>

void factorial() {
    int num;
    unsigned long long factorial = 1; // Use unsigned long long for larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    //return 0;
}
