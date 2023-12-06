#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    if (N > 0) {
        printf("Series up to %d terms: ", N);
        for (i = 1; i <= N; ++i) {
            printf("%d", i);
            if (i < N) {
                printf(",");
            }
        }
        printf("\n");
    } else {
        printf("N should be a positive integer.\n");
    }

    return 0;
}

