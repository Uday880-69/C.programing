#include <stdio.h>

int main() {
    float x, y;
    int n;

    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);

    switch (n) {
        case 1:
            y = 1 + x;
            break;
        case 2:
            y = 1 + x / n;
            break;
        case 3:
            y = 1 + x * x * x;      
            break;
        default:                    
            y = 1 + n * x;
    }

    printf("Y(%.2f, %d) = %.2f\n", x, n, y);
    return 0;
}