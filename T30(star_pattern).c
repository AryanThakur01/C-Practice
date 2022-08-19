// Star printing

#include <stdio.h>

int triangle(int n)
{

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
int rev_triangle(int n)
{
    // int a = n ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            printf("* ");
        }
        // a -= 1 ;
        printf("\n");
    }

    return 0;
}

int main()
{
    int pattern;
    printf("CHOOSE\n1 => Triangular Star pattern\n0 => Reverse Triangular Star pattern\n");
    scanf("%d", &pattern);

    int rows;
    printf("Enter the number of rows you wish to get\n");
    scanf("%d", &rows);

/*
    if (pattern == 1)
    {
        triangle(rows);
    }
    else if (pattern == 0)
    {
        rev_triangle(rows);
    }
*/

    switch (pattern)
    {
    case 0:
        rev_triangle(rows);
        break;
    case 1:
        triangle(rows);
        break;
    
    default:
        printf("You have entered an invalid input\n");
        break;
    }
    return 0;
}



/*
*
**
***
****    Triangular star pattern

****    Reverse triangular star pattern
***
**
*
*/