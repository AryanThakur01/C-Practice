#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    char str2[10];
    char str3[] = " is a friend of ";

    
    printf("Enter first name:\n");
    gets(str1);
    strcat(str1, str3);

    printf("Enter second name:\n");
    gets(str2);

    puts(strcat(str1, str2));

    return 0;
}