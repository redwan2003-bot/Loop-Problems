#include <stdio.h>

double harmonicSeriesSum(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    return sum;
}

int main() {

    int N;


    printf("Enter the value of N: ");


    scanf("%d", &N);


    if (N > 0) {

        printf("Harmonic series up to %d terms: ", N);

        for (int i = 1; i <= N; ++i) {

            printf("1/%d", i);

            if (i < N) {
                printf(", ");
            }
        }

        double sum = harmonicSeriesSum(N);
        printf("\nSum: %lf\n", sum);
    }
    else {

        printf("N should be a positive integer.\n");
    }


    return 0;
}

