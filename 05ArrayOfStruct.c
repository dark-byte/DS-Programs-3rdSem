#include <stdio.h>

struct employee
{
    char name[20];
    int salary;
    int age;
};

void main()
{
    struct employee emp[10];
    int i;

    for(i = 0; i<10; i++)
    {
        printf("Enter name of epmloyee\n");
        scanf("%s", emp[i].name);

        printf("Enter employee salary\n");
        scanf("%d", &emp[i].salary);

        printf("Enter employee age\n");
        scanf("%d", &emp[i].age);
    }

    printf("Details of 10 employee entered are -\n");

    for(i = 0; i<10; i++)
    {
        printf("Name - %s\n", emp[i].name);
        printf("Salary - %d\n", emp[i].salary);
        printf("Age - %d\n", emp[i].age);
    }
}