#include <stdio.h>

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

int search(int *nums, int numsSize, int target)
{
    int index = -1;
    if (*(nums + (numsSize / 2)) > target)
    {
        for (int i = 0; i < numsSize; i++)
        {
            if (*(nums + i) == target)
            {
                index = i;
                break;
            }
            else if (*(nums + i) > target)
            {
                break;
            }
        }
    }
    else
    {
        for (int i = 1; i < numsSize + 1; i++)
        {
            if (*(nums + numsSize - i) == target)
            {
                index = numsSize - i;
                break;
            }
        }
        
    }
    return index;
    
}

int main()
{

    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int numsize = 10;
    int target = 8;
    int a = search(nums, numsize, target);
    printf("%d", a);

    return 0;
}