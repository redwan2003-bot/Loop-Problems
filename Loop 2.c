#include <stdio.h>

int main() {

    int N, i, sum = 0;

    printf("Enter the value of N: ");

    scanf("%d", &N);

    if (N > 0) {

        printf("Series up to %d terms: ", N);

        for (i = 1; i <= N; ++i) {
        int term = 2 * i - 1;

            printf("%d", term);


            if (i < N) {
                printf(",");
            }

            sum += term;
        }

        printf("\n");


        printf("Sum: %d\n", sum);
    } else {

        printf("N should be a positive integer.\n");
    }


    return 0;
}
