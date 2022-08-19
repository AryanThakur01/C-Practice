#include <stdio.h>

int factorial(int num)
{
    if (num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}


int factorial_iteration(int num)
{
    if (num == 0 || num == 1)
    {
        return  1;
    }
    else
    {
        int factorial = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
    
    
}


int main()
{
    int number;
    printf("Enter a number to calculate facorial\n");
    scanf("%d", &number);

    printf("The factorial of %d by recursion method is %d\n", number, factorial(number));


    printf("the fsctorial of %d by iteration method is %d\n", number, factorial_iteration(number));
    
    return 0;
}

// both of the methods have same time complexity however, iteration method has a longer length of code so recursion is better method here