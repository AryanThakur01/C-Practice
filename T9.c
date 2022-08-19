#include <stdio.h>
#define pi 3.14

int main(int argc, char const *argv[])
{
    int a=8;
    const float b=7.33333;
    // b=7.22; after the float is made const then the error! will be produced

    // pi=7.33;    error!! because pi is a constant
    printf("%f", pi);
    // printf(" the value of a is %d and the value of b is %f\n",a,b);
    // printf("%9.5f",b);
    // the number after decimal and before f represents the digits that would be displayed in result after decimal which must be less than the actual number of digits after dcimal
    // the number before decimal if greater than the number after decimal than the difference of the two numbers would be left as a blank space and if the number is negative than space is left on the other sideof the float number(also check the digits to be cosidered as written after decimal in code)

    printf("my backslash \\");
    printf("my backslash \\n");
    printf("my backslash \\t");
    // printf("my backslash \");   error!! single backslash shows 

    /*
    this is multi line comment
    it will be ignored
    */
    return 0;
}