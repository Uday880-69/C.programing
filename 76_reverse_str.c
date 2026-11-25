#include<stdio.h>
int main(){
    char str[100];
    int i,count=0;
    printf("enter the string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("after reversing the string is:\n");
    for(i=count-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}