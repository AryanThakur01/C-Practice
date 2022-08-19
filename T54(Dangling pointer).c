// DANGLING POINTER

#include <stdio.h>
#include <stdlib.h>

int sum = 45;

int *functionDangling()        // The meaning of such function: we will return some address. this address will be stored as a return value of the function. This means that if we will call a function we will get the stored address as a return value.
{
    int a, b, sum2;
    a = 34;
    b = 43;
    sum = a + b;
    return &sum;
}

int main2()         // main2 is done for the Tutorial 59
{
    // Case 1: deallocation of a memory block
    int *ptr = (int *) malloc(4*sizeof(int));
    ptr[0] = 34;
    ptr[1] = 64;
    ptr[2] = 44;
    ptr[3] = 74;
    free(ptr);  //ptr is now a dangling pointer

    // Case 2: Function returning local variable address
    int *dangPtr = functionDangling();  //ptr is now a dangling pointer


    int *danglingPtr3;
    // Case 3: If a variable goes out of scope
    {
        int a =256;

        danglingPtr3 = &a;
    }
    //Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer

    
    
    return 0;
}