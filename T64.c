#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[34] = "This content was created by harry";

    // *********Reading in a file***********
    // ptr = fopen("T64test.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n", string);



    // ***********Writing a file*********
    ptr = fopen("T64test.txt", "w");    //a for append mode that is place something at the end
    fprintf(ptr, "%s", string);



    


    return 0;
}