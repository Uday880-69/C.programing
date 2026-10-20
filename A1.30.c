#include <stdio.h>

int main() {
    int num, temp, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    printf("Reverse of %d = %d\n", num, reverse);

    return 0;
}