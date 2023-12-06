#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N > 0) {

        printf("Series up to %d terms: ", N);
        int sum = 0;
        for (int i = 1; i <= N; ++i) {
            int square = i * i;
            printf("%d", square);

            if (i < N) {
                printf(", ");
            }

            sum += square;
        }


        printf("\nSum: %d\n", sum);
    } else {
        printf("N should be a positive integer.\n");
    }

    return 0;
}

