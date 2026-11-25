#include<stdio.h>
int len(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string to find its length: ");
    scanf("%s", str);
    int length = len(str);
    printf("The length of the string \"%s\" is: %d\n", str, length);
    return 0;
}