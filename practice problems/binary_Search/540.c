/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

Example 1:
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
*/

/*
BEST SOLUTION
int singleNonDuplicate(int* a, int n){
int l=0,r=n-1,m;
    while(l<r)
    {
        m=(l+r)/2;
        if((m%2==0&&(a[m]==a[m+1]))||(m%2!=0&&a[m-1]==a[m]))
        {
            l=m+1;
        }
        else{
            r=m;
        }
        
    }
    return a[l];
}
*/



#include <stdio.h>

// My answer -->too messy
int singleNonDuplicate(int *nums, int numsSize)
{
    int left = 0, right = numsSize - 1, mid = 0;
    // if the element we are searching for is at the left or at the right
    if (left != right && nums[right] != nums[right - 1])
    {
        return nums[right];
    }
    else if (left != right && nums[left] != nums[left + 1])
    {
        return nums[left];
    }

    while (left < right - 1)
    {
        mid = (left + right) / 2;
        if (mid % 2 == 0)
        {
            if (nums[mid + 1] == nums[mid]) // this means that the single element is on the left of the mid element
            {
                left = mid;
            }
            else if (nums[mid - 1] == nums[mid]) // this means that the single element is on the right of the mid element
            {
                right = mid;
            }
            else
                return nums[mid];
        }
        else
        {
            if (nums[mid + 1] == nums[mid]) // this means that the single element is on the left of the mid element
            {
                right = mid;
            }
            else if (nums[mid - 1] == nums[mid]) // this means that the single element is on the right of the mid element
            {
                left = mid;
            }
            else
                return nums[mid];
        }
    }

    return nums[mid];
}

int main()
{
    int nums[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    int single = singleNonDuplicate(nums, 9);
    printf("the required index is: %d", single);

    return 0;
}