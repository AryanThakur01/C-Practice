/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
*/

#include <stdio.h>
#include <stdlib.h>

// READ THE QUESTION CAREFULLY BECAUSE IT SAYS THE MATRIX IS SORTED BOTH ROWWISE AND COLUMNWISE
// void NegetiveNumbers(int *grid, int right, int *negetives, int gridColSize)
// {
//     int left = 0;
//     while (left < right && grid[right] < 0)
//     {
//         int mid = (left + right) / 2;
//         if (grid[mid] < 0)
//         {
//             right = mid - 1;
//         }
//         else
//         {
//             left = mid + 1;
//         }
//     }
//     // zero could also be in place of +ve
//     // +ve +ve +ve +ve |(Right minimum)-> +ve    ||    -ve -ve <-(left maximum)| -ve -ve -ve
//     // As for right it might reach minimum at a point where the number is positive and whose next index contains a -ve number
//     if (grid[right] >= 0)
//     {
//         *negetives += gridColSize - (right + 1);
//     }
//     else if (grid[left] < 0 && grid[left - 1] >= 0)
//     {
//         *negetives += gridColSize - left;
//     }
//     else
//     {
//         *negetives += gridColSize - right ;
//     }
// }

// // gridSize represents the number of rows and gridColSize represents the number of columns
// int countNegatives(int **grid, int gridSize, int *gridColSize)
// {
//     int negetives = 0;
//     for (int i = 0; i < gridSize; i++)
//     {
//         if (grid[i][*gridColSize - 1] < 0)
//         {
//             NegetiveNumbers(grid[i], *gridColSize - 1, &negetives, *gridColSize);
//         }
//     }
//     return negetives;
// }

int countNegatives(int **grid, int gridSize, int *gridColSize)
{
    int negetives = 0;
    int right = *gridColSize - 1;
    for (int i = 0; i < gridSize; i++)
    {
        if (grid[i][0] < 0)
        {
            negetives += (gridSize - i) * (right + 1 - 0);
            break;
        }

        int left = 0;
        while (left < right && grid[i][right] < 0)
        {
            int mid = (left + right) / 2;
            if (grid[i][mid] < 0)
            {
                negetives += (right - mid + 1) * (gridSize - i);
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        if (grid[i][right] < 0)
        {
            negetives += gridSize - i;
            right--;
        }

    }

    return negetives;
}

// ==============================================================================================
int main()
{
    int r = 3, c = 4, i, j, count;

    int **arr = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    count = 12;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr[i][j] = count--; // OR *(*(arr+i)+j) = ++count
        }
    }

    arr[0][0] = 9;
    arr[0][1] = 7;
    arr[0][2] = -2;
    arr[0][3] = -4;

    arr[1][0] = 8;
    arr[1][1] = 0;
    arr[1][2] = -3;
    arr[1][3] = -5;

    arr[2][0] = -2;
    arr[2][1] = -3;
    arr[2][2] = -4;
    arr[2][3] = -5;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("NEGETIVE INTEGERS = %d", countNegatives(arr, r, &c));

    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}