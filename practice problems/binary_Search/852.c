/*
Let's call an array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
*/

#include <stdio.h>

int peakIndexInMountainArray(int *arr, int arrSize)
{
    int left = 0, right = arrSize-1, mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid] && arr[mid]< arr[mid+1])
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    return 1;
}

int main()
{
    return 0;
}