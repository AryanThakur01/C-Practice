

#include <stdio.h>

void rotateLeft(int *nums, int numsSize, int k)
{

    for (int i = 0; i < k; i++)
    {
        int f = nums[0];
        for (int i = 0; i < numsSize; i++)
        {
            if (i == numsSize - 1)
            {
                nums[i] = f;
                break;
            }
            int n = nums[i + 1];
            nums[i + 1] = 0;
            nums[i] = n;
        }
    }
}

void rotateRight(int *nums, int s, int k)
{

    for (int i = 0; i < k; i++)
    {
        int l = nums[s - 1];
        for (int i = 0; i < s; i++)
        {
            if (i == s - 1)
            {
                nums[0] = l;
                break;
            }
            nums[s - 1 - i] = nums[s - 2 - i];
        }
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = 7;
    int k = 4;
    rotateRight(nums, numsSize, k);
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d, ", nums[i]);
    }

    return 0;
}