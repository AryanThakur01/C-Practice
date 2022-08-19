#include <stdio.h>

int a = 0, b = 0, c = 1;
int fibonacci(int n)
{
    if (n > 0)
    {
        printf("%d  ", c);
        a = b;
        b = c;
        c = a + b;
        fibonacci(n - 1);
    }
}

int main()
{
    int number;
    printf("Enter the nuber of terms you wish to get:\n");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("the resultant fibonacci series is\n");
        fibonacci(number);
    }
    else
    {
        printf("you must enter a positive number only.");
    }
    return 0;
}