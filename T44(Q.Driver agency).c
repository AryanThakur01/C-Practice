/*
YOU MANAGE A TRAVEL AGENCY AND YOU WANT YOUR N DRIVERS TO ENTER THE FOLLOWING DETAILS:
1. NAME
2. DRIVING LICENSE N0.
3. ROUTE
4. KMS DRIVEN WITH US.

your should be able to take n as input and your driuvers will start inputing their details one by one

Your program shoul dprint details of the drivers in a beautiful fashion
create a structure


you can assume n as 3

*/

#include <stdio.h>
#include <string.h>


int main()
{
    int num_drivers;
    
    printf("Enter the number of drivers you want the data of:   ");
    scanf("%d", &num_drivers);
    typedef struct driver
    {
        char driver_name[20];
        char DL_no[20];
        char route[20];
        int kms_driven;
    } driver_list;
    driver_list list[num_drivers];


    // strcpy(list[0].driver_name, "Aryan");

    // printf("\n\n first: %s\n\n", list[0].driver_name);

    for (int i = 0; i < num_drivers; i++)
    {
        
        printf("\nDRIVER NUMBER %d\n", i+1);

        char input[20];


        // NOTE THAT IF YOU PASS ANY VALUE INTO THE INPUT WITHA A SPACE THEN THE VALUE AFTER THE SPACE WILL BE PASSED ON TO NEXT SCANF

        // char driver_name[20];
        printf("  Driver name:  ");
        scanf("%s", &input);                         //TRY TO IGNORRE THE USE OF GETS()
        strcpy(list[i].driver_name, input);

        // char DL_no[20];
        printf("  Driving license number: ");
        scanf("%s", &input);
        strcpy(list[i].DL_no, input);
        
        // char route[20];
        printf("  Route: ");
        scanf("%s", &input);
        strcpy(list[i].route, input);

        int kms_driven;
        printf("  Distance travelled(in  kilometers): ");
        scanf("%d", &kms_driven);
        list[i].kms_driven = kms_driven;


        // printf("\n  Driver License number: ");
        // gets(strcpy(list[i].DL_no, ))
    }


    printf("\nFOLLOWING IS THE LIST OF DRIVERS IN YOUR COMPANY:");
    for (int i = 0; i < num_drivers; i++)
    {

        printf("\n\n%d. %s",i+1, list[i].driver_name);

        printf("\n      Driving license number: %s", list[i].DL_no);
        
        printf("\n      Route: %s", list[i].route);

        printf("\n      Distance travelled: %d kms.", list[i].kms_driven);

        // printf("\n  Driver License number: ");
        // gets(strcpy(list[i].DL_no, ))
    }

    
    

    return 0;
    
}