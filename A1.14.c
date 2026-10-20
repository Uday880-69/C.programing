#include<stdio.h>
int main(){
char ch;
printf("Enter your character:");
scanf("%c", &ch);

if (ch >= 65 && ch <= 90)
{
    printf("Entered character is Capital letter");
    return 0;

}
else if (ch >= 97 && ch <= 122)
{
    printf("Entered character is Small letter");
    return 0;

}
else if (ch >= 48 && ch <= 57)
{
    printf("Enetered character is digit ");
    return 0;

}

else
{
    printf("Entered character is special symbol");
    return 0;

}
}

