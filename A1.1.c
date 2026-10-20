# include<stdio.h>
int main(){
    float p, r, t;
    printf("Enter your principal amount :");
    scanf("%f", &p);
    printf("Enter your rate of interest :");
    scanf("%f", &r);
    printf("Enter your duration: ");
    scanf("%f", &t);
    
    float sum = (p * r * t)/100;
    printf("Your total interest will be: %f", sum);
    

    return 0;

}dd