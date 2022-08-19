#include<stdio.h>

// printf format specifier reference

int main()
{
    // int a = 14;
    // int*ptra = &a;
    // printf("address of  a is %d\n",ptra);
    // printf("pointer address + 1 will give %d\n",ptra + 1);
    // printf("so the value of size of int in this architectural system is %d\n", 4);

    // char c = 'A';
    // char*point = &c;
    // printf("the address of character A is %d\n",point);
    // printf("the address of character A + 1 is %d\n\n\n",point + 1);




    int arr[] = {35,54,4,6,23345,2454,455,43,3,4,43} ;
    // printf("the array is {35,54,4,6,23345,2454,455,43,3,4,43}\n");
    // printf("the first element is %d\n",arr[0]);
    // printf("the address of first element is %d\n",arr);
    // printf("the value of second element is %d\n",arr[1]);
    // printf("the address of second element is %d\n",arr + 1);

    // printf("the value of third element is %d\n",arr[2]);
    // printf("the address of third element is %d\n",arr + 2);

    // printf("the value of sixth element is %d\n",*(arr + 5));
    // printf("the address of sixth element is %d\n",arr + 5);

    int*ptr = arr;
    printf("The value value stored in ptr is %x\n", ptr);
    printf("The address of arr is %x", &arr);
    printf("The value of *ptr is %d", *ptr);
    // NOTE HOW THE POINTER POINTING TO ARRAY WORKS

    return 0;
}