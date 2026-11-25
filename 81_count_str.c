#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len,count_low=0,count_upp=0,count_digits=0,count_symbols=0;
    printf("enter the string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<=len;i++){
        if(str[i]>='a' && str[i]<='z'){
            count_low++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            count_upp++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            count_digits++;
        }
        else {
            count_symbols++;
        }
        printf("upper case letters: ",count_upp);
        printf("lower case letters: ",count_low);
        printf("digits: ",count_digits);
        printf("special symbols: ",count_symbols);
        return 0;    
    }
}