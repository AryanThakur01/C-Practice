#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;
    while (i<11)
    {
        printf("%d ",i);
        printf("%d ",i+1);
        printf("%d ",i+2);
        printf("%d ",i+3);
        printf("%d ",i+4);
        printf("%d ",i+5);
        printf("%d ",i+6);
        printf("%d ",i+7);
        printf("%d ",i+8);
        printf("%d ",i+9);
        printf("%d\n",i+10);
        i++;
    }
    
    return 0;
}
