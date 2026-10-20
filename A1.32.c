#include <stdio.h>

int main() {
    int n, i, num, max, second;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Enter at least 2 numbers\n");
        return 0;
    }

    printf("Enter %d numbers: ", n);
    scanf("%d", &max);
    scanf("%d", &second);

    if (second > max) {   
        int t = max;
        max = second;
        second = t;
    }

    for (i = 3; i <= n; i++) {
        scanf("%d", &num);
        if (num > max) {
            second = max;
            max = num;
        } else if (num > second) {
            second = num;
        }
    }

    printf("Maximum        = %d\n", max);
    printf("Second maximum = %d\n", second);

    return 0;
}