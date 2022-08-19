/*
You are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.

Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.

Example 1:
Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.
*/

/*
    Note: The returned array must be malloced, assume caller calls free().
*/

#include <stdio.h>
#include <stdlib.h>

void printNums(int *array, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void sortArray(int *nums, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (nums[j] < nums[i])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

void findingTarget(int *nums, int size, int target, int *l, int *r)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    if (nums[left] != target)
    {
        *l = 1;
        *r = 0;
        return;
    }
    *l = left;
    right = size - 1;
    while (right > left)
    {
        int mid = (right + left) / 2 + 1;
        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid;
        }
    }
    *r = right;
}

int *targetIndices(int *nums, int numsSize, int target, int *returnSize)
{
    int *rArr = NULL;

    sortArray(nums, numsSize);

    int l;
    int r;
    findingTarget(nums, numsSize, target, &l, &r);
    *returnSize = r + 1 - l;
    rArr = (int *)malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; i++)
    {
        rArr[i] = l++;
    }
    return rArr;
}

int main()
{
    int nums[8] = {1, 2, 5, 2, 3, 9, 10, 13};
    int nSize = 8, target = 13, returnSize;

    // // Printing the indices of the target number
    int *arrReturned = targetIndices(nums, nSize, target, &returnSize);
    // Printing the entered array
    printf("The array you entered is:\n");
    printNums(nums, nSize);
    printf("\n");
    printf("The indices of the %d number is:\n", target);
    printNums(arrReturned, returnSize);

    free(arrReturned);

    return 0;
}