#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float edistance(int x1, int y1, int x2, int y2)
{
    float a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return a;
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int, int, int, int))
{
    printf("The radius of the circle is %0.3f\n", sqrt(distance(x1, y1, x2, y2)));
    return (M_PI)*edistance(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float d;
    printf("Enter the value of x1: ");
    scanf("%d", &x1);

    printf("Enter the value of y1: ");
    scanf("%d", &y1);

    printf("Enter the value of x2: ");
    scanf("%d", &x2);

    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    d = areaOfCircle(x1, y1, x2, y2, edistance);
    printf("The distance between these points is %0.3f", d);

    return 0;
}