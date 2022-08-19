// PRACTICE QUESTION SOLUTION
// CAN BE DONE LIKE THIS BUT IS NOT AT ALL AN EFFICIENT SOLUTION AND IT IS BETTER TO USE LOOPS
#include <stdio.h>
#include<string.h>

struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};
int main()
{
    struct Driver d1, d2, d3;

    printf("ENTER THE DETAILS OF THE DRIVER\n");
    
    printf("Enter the details of first driver\n");
    printf("Enter the name of first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dl number of first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("The distance travelled of first driver is:");
    scanf("%s", d1.kms);


    printf("Enter the details of Second driver\n");
    printf("Enter the name of Second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dl number of Second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of Second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the distance travelled by the Second driver\n");
    scanf("%s",&d2.kms);


    printf("Enter the details of third driver\n");
    printf("Enter the name of third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dl number of third driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the distance travelled by the third driver");
    scanf("%s",&d3.kms);



    printf("\n********************************************\n");
    printf("For driver number 1: name is %s\n", d1.name);
    printf("Dl number is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);

    return 0;
}
