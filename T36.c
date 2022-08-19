#include<stdio.h>

// ARRAY REVERSAL USING PARAMETER
/*
void arrRev(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        int a = array[i];
        array[i] = array[8 - i];
        array[8 - i] = a;
    }
}
*/


// ARRAY REVERSAL USING POINTERS

void arrRev(int* array)
{
    for (int i = 0; i < 4; i++)
    {
        int a = *(array + i);
        *(array + i) = *(array + 8 - i);
        *(array + 8 - i) = a;
    }
}

void arrayPrint(int arr[]){
    printf("{");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    printf("Before reversing the array\n");
    arrayPrint(arr);
    
    arrRev(arr);

    printf("\nAfter reversing the array\n");
    arrayPrint(arr);

    return 0;
}
