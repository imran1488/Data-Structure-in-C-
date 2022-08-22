/* Insert data at any given position in a linked list */
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
void Insert(int x, int pos)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = NULL;
    if (pos == 0)
    {
        (*temp).next = head;
        head = temp;
        return;
    }
    struct Node *temp1 = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp1 = (*temp1).next;
    }
    (*temp).next = (*temp1).next;
    (*temp1).next = temp;
}
void Print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", (*temp).data);
        temp = (*temp).next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    Insert(2, 0);
    Insert(3, 1);
    Insert(4, 2);
    Insert(5, 2);
    Print();
}