#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    printf("ENTER THE NUMBER OF PEOPLE YOU WISH TO ENTER THE DATA OF: ");
    scanf("%d", &num);

    typedef struct employees
    {
        char name[20];
        char account_number[13];
        char joining_date[15];
        char address[30];
    } emp;
    emp e_list[num];


    for (int i = 0; i < num; i++)
    {
        printf("EMPLOYEE NUMBER %d\n", i+1);
        
        char input[29];
        printf("    Enter employee name:     ");
        scanf("%s", &input);
        strcpy(e_list[i].name, input);

        printf("    Enter your account number:   ");
        scanf("%s", &input);
        strcpy(e_list[i].account_number, input);
        
        printf("    Joining date:    ");
        scanf("%s", &input);
        strcpy(e_list[i].joining_date, input);

        printf("    Address:    ");
        scanf("%s", &input);
        strcpy(e_list[i].address, input);
        
    }
    

    for (int i = 0; i < num; i++)
    {
        printf("\n%d. %s\n", i+1, e_list[i].name);

        printf("\n    account number:   ");
        printf("%s\n", e_list[i].account_number);
        
        printf("    Joining date:    ");
        printf("%s\n", e_list[i].joining_date);

        printf("    Address:    ");
        printf("%s\n", e_list[i].address);
        
    }
    
    
}