#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;
    printf("Enter the number of rows you intend to print\n");
    scanf("%d", &count);
    for(int i=1 ; i < count+1 ; i++){
        for(int j = 1; j<i+1 ; j++){
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}