#include <stdio.h>

int main() {
    char input;

    printf("Input: ");
    do {
        scanf(" %c", &input);
        printf("Input: %c\n", input);
    } while (input != 'A');

    return 0;
}

