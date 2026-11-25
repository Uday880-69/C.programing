#include<stdio.h>
#include<string.h>
int main(){
    char str[100], str1[100];
    char *ptr;

    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    strcpy(str1, str);
    ptr = strrev(str1);
    printf("Reversed string is: %s\n", ptr);

    return 0;
}