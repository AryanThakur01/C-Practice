// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2

#include <stdio.h>

// USING FOR LOOP
// int searchInsert(int *nums, int numsSize, int target)
// {
//     int i;
//     if (*(nums + numsSize / 2) > target)
//     {
//         for (i = 0; i < numsSize / 2; i++)
//         {
//             if (*(nums + i) == target)
//             {
//                 break;
//             }
//             else if (*(nums + i) > target)
//             {
//                 break;
//             }
//         }
//     }
//     else
//     {
//         for (i = numsSize / 2; i < numsSize; i++)
//         {
//             if (*(nums + i) == target)
//             {
//                 break;
//             }
//             else if (*(nums + i) > target)
//             {
//                 break;
//             }
//         }
//     }
//     return i;
// }

// USING WHILE LOOP
int searchInsert(int* nums, int n, int target){
    int f=0,l=n-1,x=-1;
    while(f<=l)
    {
        int mid=(f+l)/2;
        if(nums[mid]==target){
            x=mid;
            break;
        }
        else if(nums[mid]<target)
            f=mid+1;
        else
            l=mid-1;
    }
   
    if(x==-1)
    {
        return f;
    }
    else
    return x;
}

int main()
{
    int arr[] = {1, 4, 5, 7, 9, 10, 15, 19, 28};
    int numsSize = 9;
    int target = 6;
    int pos = searchInsert(arr, numsSize, target);

    printf("%d", pos);
}