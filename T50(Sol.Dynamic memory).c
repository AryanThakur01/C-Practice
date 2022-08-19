// PRACTICE QUESTION SOLUTION

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your employee id\n", i+1);
        scanf("%d", &chars);
        getchar();                           //One possible solution to consume Enter from input buffer
        printf("Enter the value of a\n");
        scanf("%c", &a);                    //We can't add the value of a because as we enter the value of chars and press Enter the enter goes into the input buffer which is entered in a
        getchar();                           //One possible solution
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1) * sizeof(char));
        printf("Enter your employee id\n");
        scanf("%s", ptr);
        printf("Your employee id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}