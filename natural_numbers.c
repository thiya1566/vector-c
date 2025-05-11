#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    printf("First %d natural numbers:\n", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    return 0;
}
