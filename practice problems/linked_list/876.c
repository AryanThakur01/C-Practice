/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.


Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
*/

struct ListNode
{
    int data;
    struct ListNode *next;
};

void linkedListTraversal(struct ListNode *start)
{
    while (start != NULL)
    {
        printf("%d\t", start->data);
        start = start->next;
    }
    printf("\n");
}
struct ListNode *middleNode(struct ListNode *head)
{
    int count = 0;
    struct ListNode *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    ptr = head;
    count /= 2;
    for (int i = 0; i < count; i++)
    {
        ptr = ptr->next;
    }
    return ptr;
}

int main()
{
    struct ListNode *head;
    struct ListNode *second;
    struct ListNode *third;
    struct ListNode *forth;
    struct ListNode *fifth;
    struct ListNode *sixth;

    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    second = (struct ListNode *)malloc(sizeof(struct ListNode));
    third = (struct ListNode *)malloc(sizeof(struct ListNode));
    forth = (struct ListNode *)malloc(sizeof(struct ListNode));
    fifth = (struct ListNode *)malloc(sizeof(struct ListNode));
    sixth = (struct ListNode *)malloc(sizeof(struct ListNode));

    srand(time(NULL));
    head->data = rand()%10;
    head->next = second;
    second->data = rand()%10;
    second->next = third;
    third->data = rand()%10;
    third->next = forth;
    forth->data = rand()%10;
    forth->next = fifth;
    fifth->data = rand()%10;
    fifth->next = sixth;
    sixth->data = rand()%10;
    sixth->next = NULL;

    linkedListTraversal(head);

    struct ListNode *ptr = middleNode(head);

    linkedListTraversal(ptr);

    return 0;
}