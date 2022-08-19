// Types of Variables: Automatic, External, Static, Registered
// auto int myVar;
// static int myVar;
// registered int myVar;
// extern int myVar;


#include <stdio.h>
#include "temp.c"

int myVar = 98145;


int myfunc(int a, int b){
    // auto int myVar;
    static int myVar;
    myVar++;
    printf("The myVar is %d\n", myVar);

    // myVar = a+ b;
    return myVar;
}


int main()
{
    // DECLARATION: Telling the compiler about the variale (No cpace reserved)
    // DEFINIOTION: Declaration + space reservation



    register int myVar = myfunc(3, 4);
    myVar = myfunc(3, 4);
    myVar = myfunc(3, 4);
    myVar = myfunc(3, 4);
    // printf("The myVar is %d", myVar);




    return 0;
}
