#include <stdio.h>
#include <string.h>


typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[55];
} std;



int main()
{

    // typedef <previous_name> <alias_name> ;


    // typedef unsignedLong ul ;
    // ul l1, l2, l3 ;

    // typedef int integer ;
    // integer  a = 14;
    // printf("the value of a is %d", a);


    // struct Student s1, s2;
    std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("the value of s1's id is %d\n", s1.id);
    printf("the value of s2's id is %d", s2.id);



    // int* a, b;
    typedef int* intPointer;
    intPointer a,b; 
    int c = 8989;
    a = &c ;
    b = &c ;

    return 0;
}
