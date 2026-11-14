
#include <stdio.h>

int stack[5];
int top = -1;

void push() {
    int x;
    printf("Enter the element to be pushed:\n");
    scanf("%d", &x);

    if (top == 4) {
        printf("Stack overflow\n");
        return;
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    int item;
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        item = stack[top];
        top--;
        printf("Popped element is: %d\n", item);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {

        push(); 
        pop();
        peek();
        display();      
        
    
    return 0;
}