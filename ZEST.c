#include <stdio.h>

#include <string.h>

int main(int argc, char *argv[])
{
    // printf("argc is %d\n", argc);
    // if (argc >= 2)
    // {
    //     printf("The arguments supplied are:\n");
    //     for (int i = 0; i < argc; i++)
    //     {
    //         printf("%s\t", argv[i]);
    //     }

    // }
    char name[100] = "Aryan Thakur is a very smart boy";
    printf("%d",strstr(&name[0], "Aryan") == name);
    // printf("%s", house);


    return 0;
}