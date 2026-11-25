//pointer to structs
#include <stdio.h> 
int main() {
    struct Point {
        int x;
        int y;
    };

    struct Point p1 = {10, 20};
    struct Point *ptr = &p1;

    printf("Point coordinates: (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}