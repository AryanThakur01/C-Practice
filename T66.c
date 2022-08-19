// You have to fill in values to a template letter.txt
// Letter.txt looks something like this:
// Thanks {name} for purchasing {item} from our outlet {{outlet}}.
// Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon
// You have to reead this file and replace these values:
// {{name}} = Harry
// {{item}} = Table Fan
// {{Outlet}} = Run laxmi file outlet


// USe file function in C to accomplish the same


#include<stdio.h>

int main()
{
    char name[20];
    printf("Please enter your name: ");
    scanf("%s", name);

    char item[20];
    printf("Please enter the name of the item:  ");
    scanf("%s", item);

    char outlet[20];
    printf("Enter the name of the outlet:   ");
    scanf("%s", outlet);

    FILE *ptr = NULL;
    ptr = fopen("letter.txt", "a");
    fprintf(ptr, "%s", "Thanks ");
    fprintf(ptr, "%s", name);
    fprintf(ptr, "%s", " for purchasing ");
    fprintf(ptr, "%s", item);
    fprintf(ptr, "%s", " from our outlet ");
    fprintf(ptr, "%s", outlet);
    fprintf(ptr, "%s", " Please visit our outlet ");
    fprintf(ptr, "%s", outlet);
    fprintf(ptr, "%s", " for any kind of problems. We plan to serve you again soon\n");
    fclose(ptr);

    return 0;
}