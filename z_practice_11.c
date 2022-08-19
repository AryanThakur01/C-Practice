// You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

// Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

// You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.
// Example 1:

// Input: n = 5, bad = 4
// Output: 4
// Explanation:
// call isBadVersion(3) -> false
// call isBadVersion(5) -> true
// call isBadVersion(4) -> true
// Then 4 is the first bad version.

#include <stdio.h>


// POSSIBILITY ONE
// int firstBadVersion(int n)
// {
//     int half = n/2;
//     if (isBadVersion(half))
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (isBadVersion(i))
//             {
//                 return i;
//                 break;
//             }
//         }
//     }
//     else
//     {
//         for (int i = half; i <= n; i++)
//         {
//             if (isBadVersion(i))
//             break;
//             {
//                 return (i);
//             }
//         }
//     }
//     return 0;
// }




// POSSIBILITY TWO
// int firstBadVersion(int n)
// {
//     int i = 1;
//     if (isBadVersion(n / 2))
//     {
//         while (i <= n / 2)
//         {
//             if (isBadVersion(i))
//             {
//                 break;
//             }
//             i++;
//         }
//     }
//     else
//     {
//         i = n / 2;
//         while (i <= n)
//         {
//             if (isBadVersion(i))
//             {
//                 break;
//             }
//             i++;
//         }
//     }
//     return i;
// }




// POSSIBILITY THREE
int firstBadVersion(int n)
{
    int fBad;
    for (int i = 1; i <= n; i++)
    {
        if (isBadVersion(i))
        {
            fBad = i;
            break;
        }
        if (!(isBadVersion(n - i)))
        {
            fBad = n - i + 1;
            break;
        }
    }
    return fBad;
}


int main()
{
    int a = 13;
    int n = firstBadVersion(a);
    printf("%d", n);
    return 0;
}