#include <stdio.h>

int main() {
    int n, temp, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    if (temp < 0)
        temp = -temp;         

    while (temp > 9) {        
        sum = 0;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        temp = sum;
    }

    printf("Single digit sum of %d = %d\n", n, temp);

    return 0;
}