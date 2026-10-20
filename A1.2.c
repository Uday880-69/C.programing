#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter individual subject marks :");
    scanf("%d/n", &a);
    scanf("%d/n", &b);
    scanf("%d/n", &c);
    scanf("%d/n", &d);
    scanf("%d/n", &e);
int total = (a + b + c + d + e);
printf("total marks is %d/n", total);
float percentage = (total * 100)/500;

printf("your percentage is %f", percentage);
return 0;

}