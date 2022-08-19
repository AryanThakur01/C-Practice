#include <stdio.h>
#include <stdlib.h>

// NAIVE SOLUTION
// int *twoSum(int *nums, int numSize, int target, int *rSize)
// {
//     int *rArr;
//     rArr = (int *)malloc(*(rSize) * sizeof(int));
//     for (int i = 0; i < numSize; i++)
//     {
//         for (int j = 0; j < numSize; j++)
//         {
//             if ((nums[i] + nums[j]) == target)
//             {
//                 if (i<j)
//                 {
//                     rArr[0] = i+1;
//                     rArr[1] = j+1;
//                 }
//                 else
//                 {
//                     rArr[0] = j+1;
//                     rArr[1] = i+1;
//                 }
//             }
//         }
//     }
//     return rArr;
// }

// OPTIMAL SOLUTION
int *twoSum(int *nums, int numSize, int target, int *rSize)
{
    int *rArr;
    rArr = (int *)malloc(*(rSize) * sizeof(int));
    int f = 0;
    int l = numSize - 1;
    while (nums[f] + nums[l] != target)
    {
        if (nums[f] + nums[l] < target)
        {
            f++;
        }
        else if (nums[f] + nums[l] > target)
        {
            l--;
        }
    }
    rArr[0] = f + 1;
    rArr[1] = l + 1;
    return rArr;
}

int main()
{
    int nums[4] = {2, 7, 11, 15};
    int size = 4;
    int target = 9;
    int rSize = 2;
    int *returnArray = twoSum(nums, size, target, &rSize);
    for (int i = 0; i < 2; i++)
    {
        printf("%d\t", returnArray[i]);
    }

    return 0;
}