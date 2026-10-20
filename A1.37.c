#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("\n%d",&n);
    for (int i = 2; i <= n; i= i + 2)
    {
        printf("\n%d", i);

    }
    return 0;

}