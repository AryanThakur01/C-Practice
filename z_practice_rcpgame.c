#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[10];
    printf("Enter a username: \n");
    scanf("%s", &name);
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
        int userCh;
        printf("Aryan Enter number as per your choice:\n  0: rock\n  1: scissor\n  2: paper\n==>");
        // NOTE THE FOLLOEWING RESULT
        /*
            USER        COMPUTER    Difference(comp - user)
            Rock        Scissor      1
            Scissor     Paper        1
            Paper       Rock        -2
        */
        scanf("%d", &userCh);

        srand(time(NULL));
        int compCh = rand() % 3;

        if (compCh == 0)
        {
            printf("Computer choose rock\n");
        }
        else if (compCh == 1)
        {
            printf("Computer choose scissor\n");
        }
        else if (compCh == 2)
        {
            printf("Computer choose paper\n");
        }

        if ((compCh - userCh) == 1 || (compCh - userCh) == -2)
        {
            printf("YOU WIN THIS ROUND\n");
            scores[i] = 1;
        }
        else if ((compCh - userCh) == 0)
        {
            printf("This is draw\n");
            scores[i] = 0;
        }
        else
        {
            printf("YOU LOOSE THIS ROUND\n");
            scores[i] = -1;
        }
    }
    int result = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", scores[i]);
        result += scores[i];
    }
    if (result > 0)
    {
        printf("CONGRATS!!! YOU WIN");
    }
    else if (result < 0)
    {
        printf("sorry to say that you loose BUT NEVER GIVE UP");
    }
    
    

    return 0;
}