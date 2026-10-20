#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Square series up to %d are:\n", n);

    for (int i = 1;i * i <= n; i++) {
        printf("%d ", i * i);
    }

    printf("\n");
    return 0;
}
