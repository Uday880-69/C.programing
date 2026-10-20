#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            else
                printf("Error: division by zero\n");
            break;
        case '%':
            if ((int)b != 0)
                printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
            else
                printf("Error: division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}