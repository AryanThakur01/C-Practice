// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

#include <stdio.h>

void reverseString(char *s, int sSize)
{
    for (int i = 0; i < sSize / 2; i++)
    {
        char temp = s[i];
        s[i] = s[sSize - (i + 1)];
        s[sSize - (i + 1)] = temp;
    }
}

int main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    int size = 5;
    reverseString(s, size);
    printf("{");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%c, ", s[i]);
    }
    printf("%c}", s[size - 1]);

    return 0;
}