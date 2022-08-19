// PRACTICE QUESTION: MATRIX MULTIPLICATION

#include <stdio.h>

int makeMatrix(int rows, int columns, int matrix[rows][columns])
{
    printf("\nFill the matrix according to following locations of ixj\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("index %d X %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

int main()
{
    int r1, cr, c2;
    printf("ENTER THE DIMENSIONS\n");
    printf("    the matrices will have dimensions of (number of)rows x (number)columns\n");

    // Dimensions of First matrix
    printf("MATRIX I\n");
    printf("    m:  ");
    scanf("%d", &r1);
    getchar();
    printf("    n:  ");
    scanf("%d", &cr);
    getchar();

    // Dimensions of Second matrix
    printf("\nMATRIX II\n");
    printf("    m:  %d\n", cr);
    // scanf("%d", &b);     //User cannot enter the m in the dimension of the matrix because it must be set according to the matrix multiplication rule
    // getchar();
    printf("    n:  ");
    scanf("%d", &c2);
    getchar();

    int matrix1[r1][cr];
    int matrix2[cr][c2];
    int Rmatrix[r1][c2];

    printf("Filling the first matrix");
    makeMatrix(r1, cr, matrix1);

    printf("Filling the first matrix");
    makeMatrix(cr, c2, matrix2);

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int t = 0;
            int value = 0;
            while (t < cr)
            {
                value += matrix1[i][t] * matrix2[t][j];
                t++;
            }
            Rmatrix[i][j] = value;
        }
    }
    printf("\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", Rmatrix[i][j]);
            if (j == c2 - 1)
            {
                printf("\n");
                printf("\n");
            }
        }
    }

    return 0;
}