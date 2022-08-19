#include<stdio.h>

int main()
{
    int m,s;
    printf("enter 1 for yes and 0 for no\n");

    printf("did you pass in maths\n");
    scanf("%d", &m);

    printf("did you passed in science\n");
    scanf("%d",&s);

    if (m==1 & s==1)
    {
        printf("Congrats! you've won Rs 45\n");
    }
    else if (m==1 | s==1)
    {
        printf("Congrats! you've won Rs 15");
    }
    else
    {
        printf("Sorry! you got nothing");
    }

    return 0;
}