/*
Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

Example 1:

Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
Output: 2
Explanation:
For arr1[0]=4 we have:
|4-10|=6 > d=2
|4-9|=5 > d=2
|4-1|=3 > d=2
|4-8|=4 > d=2
For arr1[1]=5 we have:
|5-10|=5 > d=2
|5-9|=4 > d=2
|5-1|=4 > d=2
|5-8|=3 > d=2
For arr1[2]=8 we have:
|8-10|=2 <= d=2
|8-9|=1 <= d=2
|8-1|=7 > d=2
|8-8|=0 <= d=2
*/

#include <stdio.h>
#include <stdlib.h> //abs() function is included in this header file

void sortArray(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = i; j < arrSize; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printf("Array entered to sorted is: ");
    // for (int i = 0; i < arrSize; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    // printf("\n");
}

int findTheDistanceValue(int *arr1, int arr1Size, int *arr2, int arr2Size, int d)
{
    int count = 0;
    sortArray(arr2, arr2Size);
    for (int i = 0; i < arr1Size; i++)
    {
        int left = 0, right = arr2Size, mid = (left + right) / 2;
        while (left < right)
        {
            if (abs(arr1[i] - arr2[mid]) > d)
            {
                if (arr1[i] < arr2[mid])
                {
                    right = mid;
                }
                else
                {
                    left = mid + 1;
                }
                mid = (left + right) / 2;
            }
            else
            {
                break;
            }
        }
        if (left >= right)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr1[] = {4,5,8};
    int arr1Size = 3;

    int arr2[] = {10,9,1,8};
    int arr2Size = 4;

    int d = 2;

    int distanceValue = findTheDistanceValue(arr1, arr1Size, arr2, arr2Size, d);
    printf("%d", distanceValue);

    return 0;
}