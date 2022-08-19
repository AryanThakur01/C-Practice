#include <stdio.h>

int main()
{
    int x ;
    
    printf("enter our age:\n");
    scanf("%d",&x);

    switch (x)
    {
    case 18:
        printf("congratulations! on reaching in adults domain\n");
        break;
    
    case 17:
        printf("you are just close to become an adult\n");
        break;

    default:
        printf("you are not on any verge of adult maybe you are below adult age line or above\n");
    }

    return 0;
}