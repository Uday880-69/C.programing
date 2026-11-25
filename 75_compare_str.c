#include<stdio.h>
int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int i = 0;
    while (str1[i] != '\0'&& str1[i] == str2[i]) {
        i++;
    }
    if (str1[i] == str2[i]) {
        printf("The strings are equal.\n");
    } else if (str1[i] < str2[i]) {
        printf("The first string is smaller.\n");
    } else {
        printf("The first string is larger.\n");
    }
    return 0;
}