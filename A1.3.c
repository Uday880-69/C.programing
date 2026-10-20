#include <stdio.h>
int main() {
    float basic_salary, hra, da, gross_salary;

    printf("Enter the Basic Salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) {
        hra = basic_salary * 0.20; 
        da  = basic_salary * 0.80; 
    } 
    else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25; 
        da  = basic_salary * 0.90; 
    } 
    else {
        hra = basic_salary * 0.30; 
        da  = basic_salary * 0.95; 
    }
     gross_salary = basic_salary + hra + da;

    printf("\n--- Salary Breakdown ---");
    printf("\nBasic Salary : $%.2f", basic_salary);
    printf("\nHRA          : $%.2f", hra);
    printf("\nDA           : $%.2f", da);
    printf("\n------------------------");
    printf("\nGross Salary : $%.2f\n", gross_salary);

    return 0;
}