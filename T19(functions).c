#include <stdio.h>


// Function with argument and a return value
// ARGUMENT: y          RETURN_VALUE: y
int sum(int a, int b){
    return a+b;

}




// For functions with argument but no return value
// ARGUMENT: y          RETURN_VALUE: n
void print_star(int n){
    for(int i = 0; i < n ; i++)
    {
        printf("%c", '*');
        // remember to use single quotes for characters
    }
    printf("\n\n");
}




// For functions without argument but with a return value
// ARGUMENT: n          RETURN_VALUE: y
int takenumber()
{
    int i;
    printf("\nEnter a number: ");
    scanf("%d", &i);
    return i ;
}




// For a function without an argument and with no return value
// ARGUMENT: n          RETURN_VALUE: n
void calling(){
    printf("goodbye Aryan sir");
}




int main(int argc, char const *argv[])
{
    printf("function with both argument and a return value\n");
    int a1,b,c ;
    a1= 9;
    b = 12;
    c = sum(a1, b);
    printf("%d\n\n", c);


    printf("function with argument but no return value\n");
    print_star(5);


    printf("A function without an argument but with a return value");
    int a = takenumber();
    printf("You entered %d\n\n", a);



    calling();

    return 0;
}
