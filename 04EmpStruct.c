#include <stdio.h>

struct employee
{
    char name[20];
    int salary;
    int age;
};

void main()
{
    struct employee emp;
    printf("Enter name of epmloyee\n");
    scanf("%s", emp.name);

    printf("Enter employee salary\n");
    scanf("%d", &emp.salary);

    printf("Enter employee age\n");
    scanf("%d", &emp.age);

    printf("Employee details are -\n");
    printf("Name - %s\n", emp.name);
    printf("Salary - %d\n", emp.salary);
    printf("Age - %d\n", emp.age);
}