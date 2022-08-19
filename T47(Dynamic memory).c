// DYNAMIC MEMORY ALLOCATION: CALLOC, MALLOC, REALLOC, FREE

#include <stdio.h>
#include <stdlib.h> //calloc, malloc, realloc and free are included in this function

int main()
{
    // USE OF MALLOC()
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value number %d of this array", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array %d\n", i, ptr[i]);
    // }

    
    
    
    // USE OF CALLOC()
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));        //THIS INITITIALIZES ALL VALUES FROM 0
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value number %d of this array", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array %d\n", i, ptr[i]);
    }





    // USE OF REALLOC()
    printf("Enter the size of the NEW array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));        //THIS INITITIALIZES ALL VALUES FROM 0
    for (int i = 0; i < n; i++)
    {
        printf("Enter the NEW value number %d of this array", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The NEW value at %d of this array %d\n", i, ptr[i]);
    }


    free(ptr);


    return 0;
}