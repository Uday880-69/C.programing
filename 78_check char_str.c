#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    char key;
    printf("Enter a character to search: ");
    scanf(" %c", &key);
    while(str[i] != '\0'){
        if(str[i] == key){
            printf("Character '%c' found at index %d\n", key, i);
            return 0;
        }
        i++;
    }
    printf("Character '%c' not found in the string.\n", key);
    return 0;
}
