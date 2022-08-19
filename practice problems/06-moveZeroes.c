// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

#include <stdio.h>

// My solution
void moveZeroes(int *nums, int numsSize)
{
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
    }
    numsSize -= count;
    for (int i = 0; i < numsSize; i++)
    {
        // if (nums[i] == 0)
        // {
        //     for (int j = i; j < numsSize - 1; j++)
        //     {
        //         nums[j] = nums[j + 1];
        //     }
        //     nums[numsSize - 1] = 0;
        // }
        while (nums[i] == 0)
        {
            for (int j = i; j < numsSize + count - 1; j++)
            {
                // printf("the value of nums[%d] is: %d", i, nums[i]);
                nums[j] = nums[j + 1];
            }
            nums[numsSize + count - 1] = 0;
        }
    }
}

/*
OPTIMAL SOLUTION
void moveZeroes(int* nums, int numsSize)
{
    int i;
    int next = 0;
    if(numsSize<=1)
        return nums;
    else{ 
        for (i = 0; i < numsSize; i++) {
            if (nums[i] != 0) {
                nums[next] = nums[i];
                next++;
            }
        }
        for (i = next; i < numsSize; i++) {
            nums[i] = 0;
        }
    }
}
*/


int main()
{
    int nums[] = {1, 0, 3, 4, 0, 0, 7, 8, 9, 0, 2, 3, 4, 5, 0, 7, 8, 9};
    int size = 18;
    moveZeroes(nums, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", nums[i]);
    }

    return 0;
}