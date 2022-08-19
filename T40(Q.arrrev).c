#include <stdio.h>

// target: 7,6,5,4,3,2,1
// size: 7
// 1,2,3,4,5,6,7

void arrayRev(int arr[])
{
    for (int i = 0; i < 7 / 2; i++)
    {
        // swap item i with item 6-i
        int temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("the value of element %d is %d\n", i, arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("before reversing\n");

    arrayPrint(arr);

    arrayRev(arr);

    printf("\nafter reversing the array\n");

    arrayPrint(arr);

    return 0;
}
