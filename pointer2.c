
#include <stdio.h>

int main() {

    int n1 = 3;
    int n2 = 4;

    printf("n1 = %d \n", n1);
    printf("n2 = %d \n", n2);

    int *p1 = &n1;

    printf("location of n1: %p", &n1);
    printf("location of n2: %p", &n2);
    printf("location stored in p1 is: %p", p1);
    printf("value of location stored in p1 is: %d\n", *p1);

    printf("Moving the pointer p1 to the next location in memory");

    p1 = p1 + 1;

    printf("Size of an int: ", sizeof(n1));

    p1 = --p1;

    *p = 777;


    return 0;
}
