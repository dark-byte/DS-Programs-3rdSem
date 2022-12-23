#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int rear = -1, front = -1, Queue[MAX];

void insert()
{
    int j, item;
    if (rear == MAX - 1)
        printf("Queue is full\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter element\n");
        scanf("%d", &item);
        j = rear;
        while (j >= 0 && item < Queue[j])
        {
            Queue[j + 1] = Queue[j];
            j = j - 1;
        }
        Queue[j + 1] = item;
        rear = rear + 1;
    }
}

void delete()
{
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
        printf("Deleted element is %d\n", Queue[front++]);
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