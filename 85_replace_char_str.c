#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char oldChar, newChar;
    int i;
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to be replaced: ");
    scanf("%c", &oldChar);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]==oldChar){
            str[i]=newChar;
        }
    }
    printf("Modified string: %s", str);
    return 0;
}