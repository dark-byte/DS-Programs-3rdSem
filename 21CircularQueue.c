#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int rear = -1, front = -1, Queue[MAX];

void insert()
{
    int item;
    if (front == (rear+1) % MAX)
        printf("Queue is full\n");
    else
    {
        printf("Enter item to be inserted\n");
        scanf("%d", &item);
        if(rear == -1 && front == -1)
        {
            rear = front = 0;
            Queue[rear] = item;
        }
        else
        {
            rear = (rear + 1) % MAX;
            Queue[rear] = item;
        }
    }
}

void delete()
{
    if (front == -1 && front > rear)
        printf("Queue is empty\n");
    else if(front == rear)
    {
        printf("Deleted element is %d\n", Queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Deleted element is %d\n", Queue[front]);
        front = (front + 1) % MAX;
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue elements are-\n");
        for (i = front; i != rear; i=(i+1) % MAX)
            printf("%d\n", Queue[i]);
        printf("%d\n", Queue[rear]);
    }
}

void main()
{
    int ch;
    while (1)
    {
        printf("\n***Queue Menu***");
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice (1-4):\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice\n");
        }
    }
}