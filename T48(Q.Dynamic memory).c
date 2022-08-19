// PRACTICE QUESTION DYNAMIC MEMORY ALLOCATION
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    int chars;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the number of characters in your id: ");
        scanf("%d", &chars);

        char *ptr;
        ptr = (char *) malloc((chars+1) * sizeof(char));
        printf("Enter your Id: ");
        scanf("%s", ptr);
        printf("Your id is %s\n", ptr);

        free(ptr);
    }
    
    


    



    return 0;
}