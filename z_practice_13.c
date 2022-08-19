/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.



Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int *sortedSquares(int *nums, int ns, int *rs)
{
    int j = 0;
    for (int i = 0; i < ns; i++)
    {
        if (nums[i] < 0)
        {
            j++;
        }
        nums[i] = nums[i] * nums[i];
    }

    for (int i = 0; i < ns - j; i++)
    {
        
    }
    
    while (nums[j] > nums[j + 1])
    {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
        j--;
    }

    return 0;
}

int main()
{
    int nums[] = {-4, -3, -2, -1, 5, 6, 7, 8};
    int numsSize = 8;
    int returnSize = 8;

    sortedSquares(nums, numsSize, &returnSize);

    for (int i = 0; i < 8; i++)
    {
        printf("%d, ", nums[i]);
    }

    return 0;
}