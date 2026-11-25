#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    fputs(str, stdout);
    for(int i=0; i<strlen(str); i++){
        printf("The ascii value of %c is %d\n", str[i], str[i]);
    }
    return 0;
}