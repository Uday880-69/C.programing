#include<stdio.h>
int main(){
    int h, m, s, t;
    printf("Enter your time in seconds:");
    scanf("\n%d", &t);
    h = t/3600;
    m = (t%3600)/60;
    s = t - (h*3600) - (m*60);
    printf("Time in required format is %d hr %d min %d sec", h, m, s);
    return 0;
    
}