#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void pop() {
    if (head == NULL) {
        printf("Stack is empty\n");
        return;
    }

    struct node *temp = head;
    printf("pop element %d\n", head->data);
    head = head->next;
    free(temp);
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    push(100);
    push(80);
    push(300);

    display();

    pop();
    pop();

    return 0;
}