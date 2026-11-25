#include<stdio.h>
int main(){
    int n,*ptr;
    printf("Enter a number: ");
    scanf("%d",&n);
    ptr=&n;
    printf("Square of the number is: %d\n",(*ptr)*(*ptr));
    printf("Cube of the number is: %d\n",(*ptr)*(*ptr)*(*ptr));
    return 0;
}