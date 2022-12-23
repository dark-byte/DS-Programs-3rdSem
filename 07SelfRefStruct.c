#include <stdio.h>

struct node {
	int data1;
	char data2;
	struct node* link;
};

void main()
{
	struct node n1;

	n1.data1 = 10;
	n1.data2 = 20;

	struct node n2;

	n2.data1 = 30;
	n2.data2 = 40;

	n1.link = &n2;
    struct node *ptr = &n1;

    printf("Data of node 1 -\n");
	printf("Data 1 = %d\n", ptr->data1);
	printf("Data 2 = %d\n", ptr->data2);
    ptr++;

    printf("Data of node 2 - \n");
    printf("Data 1 = %d\n", ptr->data1);
    printf("Data 2 = %d\n", ptr->data2);
}
