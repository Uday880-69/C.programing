#include<stdio.h>
int main(){
    struct book{
        char title[50];
        char author[50];
        int pages;
    };
    struct book b1;
    printf("Enter book title: ");
    fgets(b1.title, sizeof(b1.title), stdin);
    printf("Enter book author: ");
    fgets(b1.author, sizeof(b1.author), stdin);
    printf("Enter number of pages: ");
    scanf("%d", &b1.pages);
    printf("\nBook Details:\n");
    printf("Title: %s", b1.title);
    printf("Author: %s", b1.author);
    printf("Pages: %d\n", b1.pages);
    return 0;
}
