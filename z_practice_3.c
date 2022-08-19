#include <stdio.h>

int main()
{
    int n;
    printf("enter the number for pallindrome test\n");
    scanf("%d", &n);

    int i = 1, z = 1, rem = 0, rev = 0, x = 1;

    while (i = 1)
    {
        rem = n % (10 * z);

        rem -= rev / x;
        rem /= x;
        rev += rem;

        rem = n % (10 * z);
        if (rem == n)
        {
            printf("test completed\n");
            break;
        }
        else
        {
            z *= 10;
            rev *= 10;
            x *= 10;
            continue;
        }
    }

    if (rev == n)
    {
        printf("%d", rev);
        printf(" is the reverse and the number entered is a pallindrome");
    }
    else if(n < 0){
        printf("%d", -rev);
        printf("- is the reverse and the number is not a pallindrome");
    }
    else
    {
        printf("is the reverse and the number entered is not a pallindrome");
    }

end:
    return 0;
}