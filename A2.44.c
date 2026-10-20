#include <stdio.h>

int main() {
    int arr[10], i, oddCount = 0, evenCount = 0;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Total odd numbers  = %d\n", oddCount);
    printf("Total even numbers = %d\n", evenCount);

    return 0;
}