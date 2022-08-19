#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++ ;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // char str[] ={'a', 'r', 'y', 'a', 'n', '\0'};
    // rmember to use \0 for above method

    // char str[] = "aryan";
    // char str[6] = "aryan"; note if you specify the number of character + 1 if you do so
    // printStr(str);



    char str[34];
    gets(str);

    printf("using custom function:\n");
    printStr(str);
    printf("printing using printf:\n%s\n", str);
    printf("printing using puts:\n");
    puts(str);
    return 0;
}