#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *temp, *new;
    head = malloc(sizeof(struct node));
    head->data = 34;
    head->next = NULL;
    temp = malloc(sizeof(struct node));
    temp->data = 22;
    temp->next = NULL;
    head->next = temp;
    new = malloc(sizeof(struct node));
    new->data = 44;
    new->next = NULL;
    new->next = head;
    head = new;
    temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    return 0;
}