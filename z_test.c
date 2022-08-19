#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 34;
    int *ptr = &a;
    printf("ptr:     %x\n",  ptr);
    printf("&ptr:    %d\n", &ptr);
    printf("*ptr:    %d\n", *ptr);



    int array[] = {1,2,3,4,56,7,8};
    int *p = array;
    for (int i = 0; i < 7; i++)
    {
        printf("=======printing using the pointers======= %x\n", p + i);
        printf("printing using the pointers %d\n", *(p +i));
        printf("--------------printing using the pointers--------- %d\n", p[i]);
    }


    int *pointer;
    pointer = (int *) malloc(sizeof(int));
    pointer[1] = 12321;
    printf("The value in dynamic memory is %d\n", pointer[1]);
    free(pointer);

    return 0;
}