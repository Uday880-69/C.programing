#include<stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter three nos. :");
    scanf("\n%d \n%d \n%d", &a, &b, &c);
    if (a>b && a>c)
    {
        printf("Greatest is %d", a);
        return 0;

    }
    else if (b>a && b>c)
    {
    printf("Greatest is %d", b);
    return 0;

    }
    else if (c>a && c>b)
    {
        printf("Greatest number is %d", c);
        return 0;

    }
    else
    {
        printf("One or more nos. are same or invalid input");
        return 0;
    }
    
    

}