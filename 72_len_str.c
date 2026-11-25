#include<stdio.h>
int main(){
    char str[100];
    int i,len=0;
    printf("enter the string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("the length of the string is: %d\n",len);
    return 0;
}