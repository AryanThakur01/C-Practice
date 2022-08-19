#include <stdio.h>
#include <math.h>

float eDistance(int x1, int y1, int x2, int y2)
{
    int radiusSq = pow((y2 - y1), 2) + pow((x2 - x1), 2);
    return sqrt(radiusSq);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*dist)(int, int, int, int))
{
    float r = dist(x1, y1, x2, y2);
    printf("The radius of the circle is:\t %0.3f\n", r);
    printf("The Area of the circle is:\t %0.3f\n", (M_PI)*(pow(r, 2)));
    return 0;
}

int main()
{
    int x1, x2;
    int y1, y2;
    // Take x1, y1 and x2, y2 from the user using scanf
    printf("Enter the value of point x1: ");
    scanf("%d", &x1);

    printf("Enter the value of point y1: ");
    scanf("%d", &y1);

    printf("Enter the value of point x2: ");
    scanf("%d", &x2);

    printf("Enter the value of point y2: ");
    scanf("%d", &y2);

    float (*distCalc)(int, int, int, int);
    distCalc = eDistance;

    areaOfCircle(x1, y1, x2, y2, distCalc);

    return 0;
}