/* List is a collection of same data type */
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
/* this struct node *head is the pointer to the first node in the list */
struct Node *head;
void Insert(x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
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
    printf("How many numbers?\n");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter number\n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
};
