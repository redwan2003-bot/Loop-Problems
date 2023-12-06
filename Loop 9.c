#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        int term = (i % 2 == 0) ? -i : i;

        sum += term;
    }

    printf("Sum: %d\n", sum);

    return 0;
}

