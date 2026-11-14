#include <stdio.h>

int queue[5], front = -1, rear = -1;

void enqueue()
{
    int x;
    int max_size = 5;

    printf("Enter the element to be enqueued:\n");
    scanf("%d", &x);

    if (rear == max_size - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = x;

        printf("Element inserted successfully\n");
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are:\n");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    enqueue();
    display();

    return 0;
}