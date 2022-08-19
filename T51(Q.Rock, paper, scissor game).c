// RANDOM NUMBER GENERATING

#include<stdio.h>
#include<stdlib.h>  //srand() in this library
#include<time.h>


int main()
{
    srand(time(NULL));      // srand takes seed as an input and is defined inside <stdlib.h>
    printf("The random number between 0 to 10 is %d\n", rand()%10);

    return 0;
}

/*
Create a Rock, Paper & Scissor game

Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player.Display the name of the winner at the end.
Note: You have to display name of the player during the game. Take username as an input from the user. 
*/