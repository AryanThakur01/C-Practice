#include <stdio.h>
float conversion(float n, float u)
{
    if (u==1)
    {
        return  n/1.6 ;
    }

    else if (u==2)
    {
        return n/12;
    }

    else if (u==3)
    {
        return n/2.54;
    }

    else if (u==4)
    {
        return n/2.205;
    }

    else if (u==5)
    {
        return n/39.37;
    }

    else
    {
        printf("enter a number within provided bounds for conversion");
    }
    
    return 0;
    
}
int main()
{
    float unit, number;
    printf("enter a number according to following for conversions:\n");
    printf("1--> kilometres to miles\n");
    printf("2--> inches to feet\n");
    printf("3--> centimetres to inches\n");
    printf("4--> pounds to kilogram\n");
    printf("5--> inches to metres\n");
    scanf("%f", &unit);

    printf("enter a number for conversion:");
    scanf("%f", &number);

    float a;
    a=conversion(number, unit);
    printf("%0.3f",a);

    return 0;
}