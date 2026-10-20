#include <stdio.h>

int main() {
    int num, temp, digit, count = 0, i;
    long long sum = 0, power;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= count; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}