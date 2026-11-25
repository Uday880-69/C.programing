#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len , i=0;
    printf("enter the string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    str[len]='\0';
    printf("AFTER CHANGING LOWER TO UPPER CASE: \n");
    puts(str);

}