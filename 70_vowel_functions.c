#include<stdio.h>

int is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main() {
    char character;
    printf("Enter a character to check if it is a vowel: ");
    scanf(" %c", &character);
    if (is_vowel(character)) {
        printf("%c is a vowel.\n", character);
    } else {
        printf("%c is not a vowel.\n", character);
    }
    return 0;
}