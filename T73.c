#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello World!!\n");
    printf("The sum of 5 and 7 is: %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good morning user\n");
    printf("The sum of 5 and 7 is: %d\n", fptr(5, 7));
}

int avg(int a, int b)
{
    return ( a + b)/2;
}

void greetGoodAfternoon(int (*average)(int, int))
{
    int a, b;
    printf("Good Afternoon user!!\n");
    printf("Enter the first number for average calculation\t");
    scanf("%d", &a);
    printf("Enter the second number for average calculation\t");
    scanf("%d", &b);
    printf("\nThe average of the numbers is: %d\n", average(a, b));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);

// HOMEWORK QUESTION
    ptr = avg;
    greetGoodAfternoon(ptr);

    return 0;
}