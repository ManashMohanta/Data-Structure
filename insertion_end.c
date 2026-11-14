#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *temp, *end;
    head = malloc(sizeof(struct node));
    head->data = 34;
    head->next = NULL;
    temp = malloc(sizeof(struct node));
    temp->data = 22;
    temp->next = NULL;
    head->next = temp;
    end = malloc(sizeof(struct node));
    end->data = 44;
    end->next = NULL;
    temp->next = end;
    
    temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    return 0;
}