#include<stdio.h>

// typecasting syntax
//(type) value;

int main()
{
    int a=3;
    printf("the value of a is %d\n",a);

    // note the error solution printed:
    // this is because 54 and 5 both are integers
    float b=54/7;
    printf("the value of b is %f\n",b);

    // the value of b rectified
    float c=(float)54/7;
    printf("the value of c (rectfied value of b) is:%f",c);

    return 0;
}
