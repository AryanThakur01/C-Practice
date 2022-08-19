// Fuctions: Call By Value vs Call By reference


// Call by reference function example
#include <stdio.h>

void changeValue(int* address){

    *address =375655 ;



}

int main(){
    int a =34;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);

    return 0;
}