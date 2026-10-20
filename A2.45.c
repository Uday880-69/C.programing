#include <stdio.h>

int main() {
    int arr[10], i, pos = 0, neg = 0, zero = 0;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 10; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Total positive numbers = %d\n", pos);
    printf("Total negative numbers = %d\n", neg);
    printf("Total zeros            = %d\n", zero);

    return 0;
}