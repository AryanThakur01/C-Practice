// TRIED BUT FAILED....
#include <stdio.h>
#include <string.h>

void parse(char str[], int len)
{
    char step1[30];
    char step2[30];
    int count;
    int a = 0;
    int activity = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '>' && str[i + 1] == ' ')
        {
            for (int j = i + 1; j < len; j++)
            {
                if (str[j] == ' ')
                {
                    count++;
                    i++;
                }
                else
                {
                    break;
                }
            }
            activity = 1;
        }
        else if (str [i] =='>' && str[i+1] != ' ')
        {
            activity = 1;
            step1[a] = str[i+1];
            a++;
        }
        if (activity == 1)
        {
            step1[a] = str[i+1];
            a++;
        }
    }
    puts(step1);

    
    
}

int main()
{
    char string[] = "<h1>   I need to be parsed       </h1>";

    printf("The entered html to be parsed is as given below:\n");
    puts(string);

    int length = strlen(string);
    parse(string, length);

    return 0;
}

/*

input:
<h1> This is a heading <h1>

Output:
This is astring

*/