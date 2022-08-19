#include<stdio.h>
#include <string.h>

int romanToInt(char * s){
    int rvalue = 0;
    int ones = 0;
    int tens = 0;
    int hundreds = 0;
    int thousands = 0;


    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'I')
        {
            ones++;
        }
        if (s[i] == 'V')
        {
            if (s[i-1] == 'I')
            {
                ones  = 5 - ones;
            }
            else if (s[i+1] == 'I')
            {
                ones = 5 + ones;
            }
            else{
                ones = 5;
            }
        }
        if (s[i] == 'I' && s[i+1] == 'X')
        {
            ones = 9;
        }
    }
    


    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'X' && s[i-1] != 'I')
        {
            tens +=10;
        }
        if (s[i] == 'L')
        {
            if (s[i-1] == 'X')
            {
                tens  = 50 - tens;
            }
            else if (s[i+1] == 'X')
            {
                tens = 50 + tens;
            }
            else{
                tens = 50;
            }
        }
        if (s[i] == 'X' && s[i+1] == 'C')
        {
            tens = 90;
        }
    }
    // printf("%d", ones);

    
    
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'C' && s[i-1] != 'X')
        {
            hundreds +=100;
        }
        if (s[i] == 'D')
        {
            if (s[i-1] == 'C')
            {
                hundreds  = 500 - hundreds;
            }
            else if (s[i+1] == 'C')
            {
                hundreds = 500 + hundreds;
            }
            else{
                hundreds = 500;
            }
        }
        if (s[i] == 'C' && s[i+1] == 'M')
        {
            hundreds = 900;
        }
    }
    // printf("%d", ones);
    
    
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'M' && s[i-1] != 'C')
        {
            thousands +=1000;
        }
    }





    int result = ones + tens + hundreds + thousands;    
    return result;
}

int main()
{

    char s[16];
    printf("Enter the roman number(with each roman integer in capital format):\n");
    scanf("%s", &s);

    int a = romanToInt(s);

    printf("%d", a);
    
    return 0;
}