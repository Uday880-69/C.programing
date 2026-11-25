#include<stdio.h>
int marks_array(int marks[10]) {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (marks[i] > 500) {
            count++;
        }
    }
    return count;
}
int main() {
    int marks[10];
    int count;
    printf("Enter 10 marks: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }
    count = marks_array(marks);
    if (count > 0) {
        printf("There is a mark greater than 500.\n");
    } else {
        printf("All marks are less than or equal to 500.\n");
    }
    printf("Number of students with marks greater than 500: %d\n", count);
    return 0;
}