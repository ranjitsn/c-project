#include <stdio.h>

void factorial() {
    int n, i;
    long long factorial = 1; // Use long long for larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i; // Equivalent to factorial = factorial * i;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

   // return 0;
}
