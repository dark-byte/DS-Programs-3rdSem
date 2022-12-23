#include <stdio.h>

struct employee
{
    char name[10];
    struct dob
    {
        int dd;
        int mm;
        int yy;
    }d;
}e;

void main()
{
    struct employee emp;
    printf("Enter employee name\n");
    scanf("%s", emp.name);
    printf("Enter employee date of birth\n");
    scanf("%d%d%d", &emp.d.dd, &emp.d.mm, &emp.d.yy);

    printf("Employee Details are -\n");
    printf("Name - %s\n", emp.name);
    printf("DOB - %d/%d/%d\n", emp.d.dd, emp.d.mm, emp.d.yy);
}