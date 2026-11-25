#include<stdio.h>
int main(){
    char str[100], str2[100];
    int i;
    printf("enter the string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");
    for(i=0;str[i]!='\0';i++){
        str2[i]=str[i];
    }
    str2[i]='\0';
    printf("the copied string is: %s\n",str2);
    return 0;
}