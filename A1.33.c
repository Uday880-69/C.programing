#include <stdio.h>

int main() {
    int n, i, num, max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter at least 1 number\n");
        return 0;
    }

    printf("Enter %d numbers: ", n);
    scanf("%d", &num);
    max = min = num;          

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}