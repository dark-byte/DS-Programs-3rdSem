#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int top = -1, stack[MAX];

void push()
{
    int val;
    if(top == MAX -1)
        printf("Stack is full\n");
    else 
    {
        printf("Enter element to push\n");
        scanf("%d", &val);
        top = top +1;
        stack[top] = val;
    }
}

void pop()
{
    if(top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Deleted element is %d\n", stack[top]);
        top = top -1;
    }
}

void display()
{
    int i;
    if(top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Stack is -\n");
        printf("%d <-----TOP\n", stack[top]);
        for(i = top -1; i>=0; i--)
            printf("%d\n", stack[i]);
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n***Stack Menu***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice (1-4):\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(0);
            default: printf("Wrong choice\n");
        }
    }
}