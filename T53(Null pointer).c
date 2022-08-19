// NULL POINTER

#include <stdio.h>

int main()
{
    int a = 34;
    // int * ptr = &a;
    // int * ptr = NULL;    // Use a null pointer so that you do not dereference it by mistake and also to reduce the error
    int *ptr;   // initializing and the progeram has no guarantee what the output could be and hence it could be anything
    int c = 34;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    
    
    
    return 0;
}