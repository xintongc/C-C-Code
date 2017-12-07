
#include <stdio.h>

bool twoStrCompr(char *str1[], char *str2[]){

    int v = strcmp(str1, str2);
    if(v < 0){
        return true;
    } else {
        return false;
    }
}

int main() {
    
    bool result = twoStrCompr("fgbc","fdfd");

    if(result){
        printf("True");
    } else{
        printf("false");
    }
    
    
    

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


int main() {
    int c = 79;
    printf("location of c is %p \n",&c);
    printf("value of c is %d \n", *&c);
    //在变量前面加 & 取到变量的地址
    //在地址前面加 * 取到值


    //定义一个指针变量
    int *pointer;
    pointer = &c; //指针变量pointer指向了变量c
    //pointer 中存的是 变量c， 而不是数字79

    printf("the value of c is %d\n",*pointer);


    int a = 0, b = 0, temp;
    int *p1 = NULL, *p2 = NULL;

    printf("input a:");
    scanf("%d",&a);

    printf("input b:");
    scanf("%d",&b);

    p1 = &a;
    p2 = &b;

    if(*p1 < * p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }//交换的是值，*p1依然指向a，*p2指向b

    printf("max is %d\n", *p1);
    printf("min is %d", *p2);


    return 0;
}
