#include<stdio.h>


int main()
{
    FILE * ptr = NULL;
    // ptr = fopen("myfile.txt", "r");

    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The next character I read was %c\n", c);


    // char str[5];
    // fgets(str, 6, ptr);
    // printf("The string is %s\n", str);


    // ptr = fopen("myfile.txt", "w");     //first cleans the file and then anything is inputted replacing the older content
    // fputc('o', ptr);
    // fputs("THis is to be inputted", ptr);

    // ptr = fopen("myfile.txt", "w+");                //This will be useless for reading because w cleans the file before we could read the file


    // ptr = fopen("myfile.txt", "r+");        //replaces the characters all of those required to input something new
    // fputc('o', ptr);
    // fputs("THis is to be inputted", ptr);

    
    // ptr = fopen("myfile.txt", "a");             //puts the input at the end of the file
    // fputc('o', ptr);
    // fputs("THis is to be inputted", ptr);

    
    // ptr = fopen("myfile.txt", "a+");             //We can append or read
    // char str[5];
    // fgets(str, 5, ptr);
    // printf("The entered string is %s\n", str);




    fclose(ptr);
    
    return 0;
}