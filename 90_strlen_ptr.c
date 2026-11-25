#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *ptr=str;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    printf("Length of the string is: %d\n",len-1);
    ptr=str;
    int len_no_space=0;
    while(*ptr!='\0'){
        if(*ptr!=' ' && *ptr!='\n'){
            len_no_space++;
        }
        ptr++;
    }
    printf("Length of the string (excluding spaces) is: %d\n",len_no_space);
    return 0;
}