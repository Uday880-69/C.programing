#include<stdio.h>
int main(){
    int n, i;
   unsigned long long p = 1;

    printf("Enter number:");
    scanf("\n%d", &n);
    for (int i = 1; i <= n; i++)
    {
        p = p * i;

    }
    printf("Factorial of n is %llu\n", p);
    return 0;

}