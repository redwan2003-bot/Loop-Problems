#include <stdio.h>


unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    if (number >= 0) {
        unsigned long long result = factorial(number);
        printf("Factorial of %d = %llu\n", number, result);
    } else {
        printf("Please enter a non-negative number.\n");
    }

    return 0;
}

