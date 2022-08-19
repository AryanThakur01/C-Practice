#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // LET'S COUNT THE NUMBER OF TIMES OLD WORDS OCCUR IN THE STRING
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i ++;
            str ++;
        }
    }

    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr = NULL;

    ptr = fopen("bill.txt", "r");

    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);
    fclose(ptr);




    ptr = fopen("genBill", "w");
    // CALL THE REPLACE WORD FUNCTION
    char *newStr;
    newStr = replaceWord(str, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(newStr, "{{name}}", "Aryan");

    printf("The actual bill generated is: %s\n", newStr);

    fprintf(ptr, "%s", newStr);

    fclose(ptr);

    return 0;
}