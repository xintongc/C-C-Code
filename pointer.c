#include <stdio.h>

int sum(int *a,int *b){
    *a = 0;
    *b = 0;
    return(*a + *b);
}

int main()
{
    
    int a = 1;
    int b = 1;
    int c = 1;
    
    int s = sum(&a, &b);
    printf("%d, %d",a, b);
}

pass by reference
/////////////////////////////////////
pass by value

#include <stdio.h>

int sum(int a,int b){
    a = 0;
    b = 0;
    return(a + b);
}

int main()
{
    
    int a = 1;
    int b = 1;
    int c = 1;
    
    int s = sum(a, b);
    printf("%d, %d",a, b);
}
