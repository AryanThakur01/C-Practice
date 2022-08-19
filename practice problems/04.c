// (Binary_Search 977)
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// Example 1:
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].

#include <stdio.h>
#include <stdlib.h>

void switchNums(int *rnums, int i, int j)
{
    int temp = rnums[i];
    rnums[i] = rnums[j];
    rnums[j] = temp;
}

int* sortedSquares(int *nums, int numsSize, int *returnSize)
{
    int *rnums = nums;
    int negetives = 0;
    int i = 0;
    while (rnums[i] < 0 && i < numsSize)
    {
        negetives++;
        i++;
    }
    i = 0;
    while (i < numsSize)
    {
        rnums[i] = rnums[i] * rnums[i];
        i++;
    }
    if (negetives == 0)
    {
        return rnums;
    }
    else if (numsSize - negetives == 0)
    {
        for (int i = 0; i < negetives / 2; i++)
        {
            int temp = rnums[i];
            rnums[i] = rnums[numsSize - 1 - i];
            rnums[numsSize - 1 - i] = temp;
        }
        return rnums;
    }
    else
    {
        for (i = negetives - 1; i >= 0; i--)
        {
            for (int j = i; j < numsSize - 1; j++)
            {
                if (rnums[j] > rnums[j + 1])
                {
                    switchNums(rnums, j, j + 1);
                }
                else{break;}
            }
        }
        return rnums;
    }
}

int main()
{
    int nums[] = {-4,-1,0,3,10};
    int size = 5;
    int *sqsarr = sortedSquares(nums, size, &size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", sqsarr[i]);
    }

    return 0;
}