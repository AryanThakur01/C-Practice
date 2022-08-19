//OPERATORS

#include <stdio.h>

int main()
{
    int a,b ;
    float c ;
    a=75;
    b=54;
    c=7;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a%b=%d\n",a%b);
    printf("a/b=%d\n",a/b);
    
    // int+float=float
    printf("a+c=%f\n",a+c);
    printf("b-c=%f\n",b-c);
    printf("a*c=%f\n",a*c);

    int p,q;
    p=5;
    q=5;
    printf("is p=q? %d\n", p==q);

    printf("p&&q=%d\n",p&&q);  //are p and q both integers
    printf("a||b=%d\n",a||b);   //is a or b any of them integer
    printf("!b=%d\n",!b);   //is a or b any of them integer

    return 0;
}
