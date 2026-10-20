#include<stdio.h>
int main(){
    float m, p, c, e, q;
    printf("Enter mathematics marks out of 200:");
    scanf("%f", &m);
    printf("Enter physics marks out of 200:");
    scanf("%f", &p);
    printf("Enter chemistry marks out of 200:");
    scanf("%f", &c);
    printf("Enter entrance exam marks out of 100:");
    scanf("%f", &e);
    q = (m + p + c + 2 * e)/2;
    printf("required cutoff marks is: %f", q);
    return 0;


}