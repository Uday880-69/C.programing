#include<stdio.h>
int main(){
int a;
printf("Enter the format in which time is being entered 1)hours 2)minutes:");
scanf("%d", &a);
if (a == 1)
{
    printf("Enter time:");
    int h, s;
    scanf("%d", &h);
    s = h * 3600;
    printf("Required time in seconds is: %d", s);
    return 0;
}
else
{
    printf("Enter time:");
    int m, p;
    scanf("%d", &m);
    p = m * 60;
    printf("Required time in seconds is: %d", p);
    return 0;
}


}