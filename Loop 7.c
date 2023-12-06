
#include <stdio.h>

int main() {
    int N, number;
    double sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N > 0) {

        for (int i = 1; i <= N; ++i) {
            printf("Input %d: ", i);
            scanf("%d", &number);

            sum += number;
        }

        double average = sum / N;
        printf("Average: %lf\n", average);
    } else {
        printf("N should be a positive integer.\n");
    }

    return 0;
}
