#include<stdio.h>


int main(int argc, char const *argv[])
{
    printf("Let's learn about pointers\n");

    int a = 76;
    int* ptra = &a;
    printf("The address of pointer to a is %x\n", &ptra);
    printf("The address of a is %x\n", ptra);
    printf("The value of a is %d\n", *ptra);        //dereferencing the value of a
    printf("The value of a is %d\n", a);


    int *ptr = NULL;


    return 0;
}