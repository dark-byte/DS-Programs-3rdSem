#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int rear = -1, front = -1, Queue[MAX];

void insertRear()
{
    int item;
    if (rear == MAX - 1)
        printf("Queue is full\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter item to be inserted\n");
        scanf("%d", &item);
        Queue[++rear] = item;
    }
}

void insertFront()
{
    int item;
    if(front == 0)
        printf("Front is full\n");
    else
    {
        printf("Enter the item\n");
        scanf("%d", &item);
        if(front = 0)
        {
            front = front -1;
            Queue[front] = item;
        }
        else
        {
            front = rear = 0;
            Queue[front] = item;
        }
    }
}

void deleteFront()
{
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
        printf("Deleted element is %d\n", Queue[front++]);
}

void deleteRear()
{
    if(front == -1 || front > rear)
        printf("Queue is empty\n");
    else
    {
        printf("Detelted element is %d\n", Queue[rear--]);
    }
}

void display()
{
    int i;
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
    {
        printf("Queue elements are-\n");
        for (i = front; i <= rear; i++)
            printf("%d\n", Queue[i]);
    }
}

void main()
{
    int ch;
    while (1)
    {
        printf("\n***Queue Menu***");
        printf("\n\n1.Insert Front\n2.Insert Rear\n3.Delete Front\n4.Delete Rear\n5.Display\n6.Exit\n");
        printf("Enter your choice (1-4):\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: insertFront();
            break;
        case 2: insertRear();
            break;
        case 3: deleteFront();
            break;
        case 4: deleteRear();
            break;
        case 5: display();
            break;
        case 6: exit(0);
        default:
            printf("Wrong choice\n");
        }
    }
}