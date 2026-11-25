#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int total_words=0;

    char *ptr=str;
    while(*ptr!='\0'){
        if(*ptr!=' ' && *ptr!='\n'){
            total_words++;
            while(*ptr!=' ' && *ptr!='\0' && *ptr!='\n'){
                ptr++;
            }
        }
        ptr++;
    }
    printf("Total number of words in the string is: %d\n", total_words);
    return 0;
}