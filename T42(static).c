#include <stdio.h>

int b = 34;

int func1(int b)
{

    // static int myVar;
    static int myVar = 98;

    printf("the value of my var is %d\n", myVar);

    myVar++;

    // printf("the value of b inside func1 is %d\n", b);   //note local variable took precedence
    // printf("the address of b inside func1 is %d\n", &b);
    // return b*10;
    return b + 10;
}


int ret()
{
    return 43* 33;
}


int main()
{

    // static int value = ret();        this will throwan error
    
    int b = 344;
    // printf("the address of b inside main is %d\n", &b);

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("the value of func1 is %d\n", val);

    return 0;
}