#include <stdio.h>


int main(int argc, char const *argv[])
{
    int numEntered, n;
    printf("Enter a number for pallindrome test\n");
    scanf("%d", &numEntered);

    n = numEntered;



    int i = 1, rem = 0, rev = 0;
    while(i = 1){
        rem = n % 10;
        rev += rem;
        n -= rem;
        n /= 10;

        if (n == 0)
        {
            printf("ANALYSIS COMPLETE!! \n\n");
            break;
        }
        
        rev *= 10;
    }

    if (numEntered < 0)
    {
        printf("Reverse of the number is %d- and hence, it is NOT PALLINDROME", -rev);
    }
    else if (numEntered == rev)
    {
        printf("reverse of the number is %d and hence, it is PALLINDROME", rev);
    }
    else if(numEntered != rev)
    {
        printf("Reverse of the number is %d and hence, it is NOT PALLINDROME", rev);
    }
    

    return 0;
}