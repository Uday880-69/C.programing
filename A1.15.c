#include <stdio.h>

int main() {
    int a, b, c, d, e, s;

    printf("Enter the marks of your five subjects out of 100 individually:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    s = (a + b + c + d + e) * 100 / 500;

    if (s >= 90) {
        printf("Acquired grade is A\n");
    } else if (s >= 80) {
        printf("Acquired grade is B\n");
    } else if (s >= 70) {
        printf("Acquired grade is C\n");
    } else if (s >= 60) {
        printf("Acquired grade is D\n");
    } else if (s >= 50) {
        printf("Acquired grade is E\n");
    } else {
        printf("Acquired grade is F\n");
    }

    return 0;
}