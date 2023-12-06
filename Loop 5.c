#include <stdio.h>

int main() {
    int N;
    long long term = 9, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);


    if (N > 0) {

        printf("Series up to %d terms: ", N);
        for (int i = 1; i <= N; ++i) {
            printf("%lld", term);

            if (i < N) {
                printf(", ");
            }


            sum += term;


            term = term * 10 + 9;
        }


        printf("\nSum: %lld\n", sum);
    } else {
        printf("N should be a positive integer.\n");
    }

    return 0;
}

