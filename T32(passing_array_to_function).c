#include <stdio.h>



int func1(int array[]){

    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    
    array[0] = 222 ;            //note that if you change any value here then it gets reflected in main()
    return 0;
}



void func2(int* ptr){

    for (int i = 0; i < 5; i++)
    {
        // printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }

    *(ptr + 2) = 6534 ;
    printf("%d")

}



void func3(int arr[2][2]){
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
            printf("the value at position %d, %d is %d\n", i, j, arr[i][j]);
        }
        
    }
}



int main()
{

    int arr[] = {2, 4, 3, 4, 5};



    // passing array as a parameter
    // printf("the value at index 0 is %d", arr[0]);
    // func1(arr);
    // printf("the value at index 0 is %d", arr[0]);



    func2(arr);
    // func2(arr);




    // int arr[][2] = {{2, 4}, 
    //                 {7, 5}};

    // func3(arr);



    return 0;
}