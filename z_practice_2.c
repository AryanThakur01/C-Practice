#include<stdio.h>





int main(int argc, char const *argv[])
{
    int n;
    printf("enter the number of terms that you wish to enter in the array\n");
    scanf("%d", &n);
    int nums[n];


    int x;

    for (int i = 0; i < n; i++)
    {
        switch (x)
        {
        case 0:
            break;
        
        default:
            end1:
                x = 0;
            break;
        }


        int num_ent;

        printf("Enter the number at position %d in array\n", i + 1);
        scanf("%d", &num_ent);

        nums[i] = num_ent;


        for (int j = 0; j < i; j++)
        {
            if (nums[i] != nums[j] & i != j)
            {
                nums[i] = num_ent;
            }
            else if(i == j){
                continue;
            }
            else
            {
                x = 1;
                printf("\nYou have already entered that number so please try again\n\n");
                goto end1;
            }
        }
    }

    int target;
    printf("Enter the target number\n");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("\nRequired indices are as follows:\n[%d, %d]", nums[i], nums[j]);
                goto end;
            }
            else{
                continue;
            }
        }
    }

    end:

    return 0;
}