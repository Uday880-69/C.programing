#include<stdio.h>
int main(){

    float sec, min, hours, days;
    sec = 31558150;
    min = sec/60;
    hours = min/60;
    days = hours/24;
    printf("Revolution time period in min, hours and days are : %f %f %f", min, hours, days);
    return 0;

}