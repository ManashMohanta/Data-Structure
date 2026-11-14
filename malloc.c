#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *stack = (int *)malloc(5 * sizeof(int));
    int top = -1;
    int i;
    for(i=0; i<5; i++)
    {
        stack[++top] = i+1;
    }
    printf("Stack after pushing 5 elements: ");
    for(i=0; i<=top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
    free(stack);
    return 0;
}