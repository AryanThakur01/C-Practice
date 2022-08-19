#include <stdio.h>

/*
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

Example 1:

Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
*/

/*
Definition for singly-linked list.
struct ListNode {
      int val;
      struct ListNode *next;
};
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

int getDecimalValue(struct ListNode *ptr)
{
    int decimal = 0;
    while (ptr != NULL)
    {
        // printf("running\t%d\n", decimal);
        decimal = (decimal * 2) + (ptr->val);
        ptr = ptr->next;
    }
    return decimal;
}

int main()
{
    struct ListNode *head;
    struct ListNode *b2;
    struct ListNode *b3;
    struct ListNode *b4;
    struct ListNode *b5;

    head = (struct ListNode *) malloc(sizeof(struct ListNode));
    b2 = (struct ListNode *) malloc(sizeof(struct ListNode));
    b3 = (struct ListNode *) malloc(sizeof(struct ListNode));
    b4 = (struct ListNode *) malloc(sizeof(struct ListNode));
    b5 = (struct ListNode *) malloc(sizeof(struct ListNode));

    head->val = 1;
    head->next = b2;
    b2->val = 0;
    b2->next = b3;
    b3->val = 1;
    b3->next = b4;
    b4->val = 0;
    b4->next = b5;
    b5->val = 1;
    b5->next = NULL;

    int decimalValue = getDecimalValue(head);
    printf("The decimal value of the entered binary number is: %d\n", decimalValue);
    
    return 0;
}