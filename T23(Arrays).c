#include <stdio.h>

int main()
{
    //SYNTAX 1
    int mark[4];
    mark[0] = 12;
    mark[1] = 14;
    mark[2] = 13;
    mark[3] = 15;

    int b = mark[3];
    printf("%d\n",b);


    //SYNTAX 2
    int marks[] = {10,20,13,18,19};
    int a = marks[4];
    printf("%d\n",a);


    //2D MATRIX SYNTAX
    int matrix[3][5] = {{12, 13, 14, 15, 16},
                        {22, 14, 23, 21, 25},
                        {36, 34, 31, 33, 32}};
    int c = matrix[2][4];
    printf("%d",c);

    return 0;

}