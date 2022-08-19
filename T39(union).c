// Unions in C

#include <stdio.h>
#include <string.h>

int main()
{

    union result{
        char subject[10];
        int marks;
        char grade;
    }anamika, alisha, akhil, sumit;


    anamika.grade = 'B';
    anamika.marks = 89;
    strcpy(anamika.subject, "Maths");


//Note that the memory location can be allocated to one element only and hence only the subject part will produce an output
    printf("ANAMIKA\n");
    printf("   Subject: %s\n",anamika.subject);    // This  will give the output because it is defined in the last above
    printf("   marks: %d\n",anamika.marks);            // this will give some garbage value
    printf("   grade: %c\n\n",anamika.grade);      // This will give some garbage value




// This is how a union should be handled
    printf("ALISHA\n");

    strcpy(alisha.subject, "Maths");
    printf("   Subject: %s\n",alisha.subject);

    alisha.marks = 100;
    printf("   marks: %d\n",alisha.marks);

    alisha.grade = 'A';
    printf("   grade: %c\n\n",alisha.grade);

    return 0;
}