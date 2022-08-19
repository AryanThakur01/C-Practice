/*
You are given an integer array nums where the ith bag contains nums[i] balls. You are also given an integer maxOperations.

You can perform the following operation at most maxOperations times:

Take any bag of balls and divide it into two new bags with a positive number of balls.
For example, a bag of 5 balls can become two new bags of 1 and 4 balls, or two new bags of 2 and 3 balls.
Your penalty is the maximum number of balls in a bag. You want to minimize your penalty after the operations.

Return the minimum possible penalty after performing the operations.


Example 1:
Input: nums = [9], maxOperations = 2
Output: 3
Explanation:
- Divide the bag with 9 balls into two bags of sizes 6 and 3. [9] -> [6,3].
- Divide the bag with 6 balls into two bags of sizes 3 and 3. [6,3] -> [3,3,3].
The bag with the most number of balls has 3 balls, so your penalty is 3 and you should return 3.
*/

#include <stdio.h>
#include <stdlib.h>

void sortArray(int *nums, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (nums[j] > nums[i])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", nums[i]);
    }
    printf("\n");
}

int minimumSize(int *nums, int numsSize, int maxOperations)
{

    sortArray(nums, numsSize);
    int *numsUpdated = NULL;
    numsUpdated = (int *)malloc(sizeof(int) * (numsSize + maxOperations));
    for (int i = 0; i < numsSize; i++)
    {
        numsUpdated[i] = nums[i];
    }

    int loopReps = maxOperations;
    for (int k = 0; k < loopReps; k++)
    {
        int value = numsUpdated[0] / (maxOperations + 1);
        // Binary Search for the position of the value
        int left = 1, right = numsSize - 1, mid;
        while (left < right)
        {
            mid = left + right / 2;
            if (numsUpdated[mid - 1] > value && numsUpdated[mid + 1] < value)
            {
                // printf("c1\n");
                break;
            }
            else if (numsUpdated[mid] > value)
            {
                // printf("c2\n");
                left = mid + 1;
            }
            else
            {
                // printf("c3\n");
                right = mid - 1;
            }
        }

        for (int i = numsSize; i > mid; i--)
        {
            numsUpdated[i] = numsUpdated[i - 1];
        }

        numsUpdated[mid] = value;
        numsSize++;
        left = 0;
        while (numsUpdated[left + 1] > numsUpdated[left] && ((left + 1) < numsSize))
        {
            int temp = numsUpdated[left + 1];
            numsUpdated[left + 1] = numsUpdated[left];
            numsUpdated[left] = temp;
            left++;
        }
        // printf("%d",value);
        numsUpdated[0] -= value;
        maxOperations--;
        printf("%d\n", value);
    }

    printf("\n");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d\t", numsUpdated[i]);
    }
    printf("\n");
    return numsUpdated[0];
}

int main()
{
    int nums[] = {2, 7, 8, 2};
    int limit = minimumSize(nums, 4, 4);
    printf("%d\n", limit);
    return 0;
}