#include <stdio.h>

void factorial() {
    int n;
    long long fact = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative number
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else {
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d is %lld\n", n, fact);
    }

 //   return 0;
}
