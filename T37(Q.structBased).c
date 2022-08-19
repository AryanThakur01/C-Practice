#include <stdio.h>
#include<string.h>

struct Student
{
    int id;
    int marks;
    char grade;
    char remarks[100];
};

struct Student aryan, amilia;
int main(){

    aryan.id = 1;
    aryan.marks = 99;
    aryan.grade = 'A';
    strcpy(aryan.remarks, "He is a very smart boy and is an extraordinary student");


    amilia.id = 2;
    amilia.marks = 97;
    amilia.grade = 'A';
    strcpy(amilia.remarks, "She is pretty smart girl witha great heart");

    printf("Aryan Thakur:\nid: %d\nmarks: %d\ngrade: %c\nremarks: %s\n\n", aryan.id, aryan.marks, aryan.grade, aryan.remarks);
    printf("Amilia:\nid: %d\nmarks: %d\ngrade: %c\nremarks: %s", amilia.id, amilia.marks, amilia.grade, amilia.remarks);

    return 0;
}