// remember to use goto statement for the purpose used in this program only

#include<stdio.h>

int main()
{
    int i,j,count;
    printf("hey you,user, remember not to overwhelm me with a number greater than 10\n");
    printf("enter the number of rows you want to be printed [and remember properties mentioned above]:\n");
    scanf("%d", &count);


    for ( i = 1; i < count+1; i++)
    {
        if (count>=10 & i==11)
        {
                goto end;
        }
        for ( j = 1; j < i+1; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    goto end2;
    end:
        printf("\nStop it!!\nyoufool\ndon't irritate me\n*that's enough\nno more fun here\nI am not a computer\nwait I am\nbut this does not mean you can ask me to do anything just for your pleasure");
    
    end2:

    return 0;
}