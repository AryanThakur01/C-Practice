#include <stdio.h>

int main()
{
    int t,n=1 ;
    printf("what table do you want of?\n");
    scanf("%d",&t);

    do
    {
        printf("%d",t);
        printf(" x %d =",n);
        printf("%d\n",t*n);
        n+=1 ;
    } while (n<=10);

    return 0;
}