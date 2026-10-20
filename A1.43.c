#include <stdio.h>

int main() {
    float sales, commission;

    printf("Enter sales amount (Rs.): ");
    scanf("%f", &sales);

    if (sales < 0) {
        printf("Sales cannot be negative\n");
        return 0;
    }

    if (sales <= 500)
        commission = 0.05 * sales;
    else if (sales <= 2000)
        commission = 35 + 0.10 * (sales - 500);
    else if (sales <= 5000)
        commission = 185 + 0.12 * (sales - 2000);
    else
        commission = 0.125 * sales;

    printf("Sales      = Rs. %.2f\n", sales);
    printf("Commission = Rs. %.2f\n", commission);

    return 0;
}