#include <stdio.h>

typedef struct {
    float x;
    float y;
} coordinate;


int main() {

    coordinate p1 = {0,0};
    coordinate p2 = {.x = 1, .y = 3};
    coordinate p3;
    coordinate p4;

    p3.x = 2;
    p3.y = 7;
    p4 = p3;

    printf("p1 = (%.0f,%.0f)\n", p1.x, p1.y);
    printf("p2 = (%.0f,%.0f)\n", p2.x, p2.y);
    printf("p3 = (%.0f,%.0f)\n", p3.x, p3.y);
    printf("p4 = (%.0f,%.0f)\n", p4.x, p4.y);

    coordinate *ptr = &p1;
    (*ptr).x = 3;
    ptr->y = 3;

    printf("p1 = (%.0f,%.0f)\n", p1.x, p1.y);
    
    return 0;
}
