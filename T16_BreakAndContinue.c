// break and continue statements

#include <stdio.h>

int main()
{
    int a,i=5;
    while (i!=0)
    {
        printf("Enter a number:\n");
        scanf("%d", &a);

        if (a==5)
        {
            printf("you are gonna encounter a continue\n");
            continue;
        }
        
        if (a==10)
        {
            printf("you are gonna encounter a break statement");
            break;
        }

        printf("neither break nor continue encountred\n");

        printf("enter 0 to exit from the code\n");
        scanf("%d",&i);
    }
    return 0;
}