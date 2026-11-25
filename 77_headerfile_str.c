#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str1[100],str2[100],str3[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a string1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter a string2: ");
    fgets(str2, sizeof(str2), stdin);
    printf("Enter a string3: ");
    fgets(str3, sizeof(str3), stdin);
    
    int length = strlen(str);
    printf("Length of the string is: %d\n", length - 1); 
    strcpy(str1, str);
    printf("Copied string is: %s", str1);
    strcat(str2, str3);
    printf("Concatenated string is: %s", str2);
    strcmp(str1, str2);
    if(strcmp(str1, str2) == 0){
        printf("The strings are equal.\n");
    } else if(strcmp(str1, str2) < 0){
        printf("The first string is smaller.\n");
    } else {
        printf("The first string is larger.\n");
    }
    strrev(str);
    printf("Reversed string is: %s", str);
    return 0;
}

