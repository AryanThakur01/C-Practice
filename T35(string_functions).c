#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "harry";
    char s2[] = "aryan";
    char s3[54];
    printf("the strcmp for s1, s2 returned %d\n", strcmp(s1,s2));
    // it will just compare and the standard just says that this will compare nothing like positive zero or negative


    // puts(strcat(s1, s2));

    printf("the length of s1 is %d\n", strlen(s1));
    printf("the length of s2 is %d\n", strlen(s2));


    printf("the reversed string s1 is:\n");
    puts(strrev(s1));
    printf("the reversed string s2 is:\n");
    puts(strrev(s2));


    // s3 = strcat(s1, s2);     this will produce error

    strcpy(s3, strcat(s1, s2));
    puts(s3);




    return 0;
}


// H.W  allow the user to enter enter two strings and then concatenate them by saying that str1 is a friend of str2