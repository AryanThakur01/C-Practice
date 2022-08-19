// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// Example 1:

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// THIS COULD BE A SOLUTION BUT IS NOT GOOD AS IF THERE ARE MULTIPLE SPACES IN BETWEEN IT WILL NOT WORK PROPERLY AND ALSO THIS IS WAY TOO SLOW
// char *reverseWords(char *s)
// {
//     int length = strlen(s) + 1;
//     int count = 0;
//     int i = 0;
//     while (i < length)
//     {
//         if (s[i] == ' ' || s[i] == '\0')
//         {
//             int t = 1;
//             for (int j = count; j < count + (i - count) / 2; j++)
//             {
//                 char temp = s[j];
//                 s[j] = s[i - t];
//                 s[i - t] = temp;
//                 t++;
//             }
//             count = i + 1;
//         }
//         i++;
//     }
//     return s;
// }


// THIS IS BETTER BECAUSE IT TAKES LESS TIME TO LOAD AND ALSO THIS FUNCTION CAN WORK WITH MULTIPLE SPACES IN BETWEEN
void reverse_str(char *s, int start, int end)
{
    char t;
    while (start < end)
    {
        t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
}

char *reverseWords(char *s)
{
    int len = strlen(s);
    int start_index = -1;

    for (int i = 0; i < len; i++)
    {
        if (start_index < 0)
        {
            if (s[i] != ' ')
                start_index = i;
        }
        else
        {
            if (s[i] == ' ' || i == len - 1)
            {
                if (s[i] == ' ')
                {
                    reverse_str(s, start_index, i - 1);
                }
                else
                {
                    reverse_str(s, start_index, i);
                }
                start_index = -1;
            }
        }
    }
    return s;
}

int main()
{
    char string[] = "Let's take LeetCode contest";
    printf("The entered string is ~~~~~~~~~~%s\n", string);
    char *str = reverseWords(string);
    printf("The reversed string is ~~~~~~~~~~%s\n", str);

    return 0;
}