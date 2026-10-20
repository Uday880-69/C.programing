#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d are:\n", n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
