// ROCK PAPER SCISSOR GAME SOLUTION

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    // For Rock paper scissor Returns 1 if c1>c2 and 0 otherwise. If c1 == c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char1 == 'r') && (char2 == 'p'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the rock paper scissor game\n");
    // printf("Choose 1 for rock, 2 for paper and 3 for scissor\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input
        printf("Player 1's turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n", playerChar);

        // Generate computer's input
        printf("Computer's turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("computer chose %c\n\n", compChar);
        // Compare the scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU got it\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("it is a draw\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it\n");
        }
        printf("\n  You: %d\n  CPU:%d\n", playerScore, compScore);
    }

    if (playerScore > compScore)
    {
        printf("You won the game, congrats!!!\n");
    }
    else if (playerScore < compScore)
    {
        printf("SORRY to say that you lost\n");
    }
    else
    {
        printf("It's a draw\n");
    }

    return 0;
}