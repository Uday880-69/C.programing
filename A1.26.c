#include <stdio.h>

int main() {
    int n, i, oddSum = 0, evenSum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    printf("Sum of odd numbers  = %d\n", oddSum);
    printf("Sum of even numbers = %d\n", evenSum);

    return 0;
}