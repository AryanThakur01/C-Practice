#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[40];
}Aryan, Yash, Harry;

// struct Student Aryan, Yash, Harry;

int main()
{
    Aryan.id = 1;
    Yash.id = 2;
    Harry.id = 3;

    Aryan.marks = 191;
    Yash.marks = 120;
    Harry.marks = 239;

    Aryan.fav_char = 'a';
    Harry.fav_char = 'b';
    Yash.fav_char = 'c';

    strcpy(Harry.name, "Harry Potter student of the year\n");

    printf("harry got %d marks\n", Harry.marks);
    printf("Harry's name is %s\n", Harry.name);

    return 0;
}