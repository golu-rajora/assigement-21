//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
void input(struct employee *e)
{
    printf("enter employee id-");
    scanf("%d",&e->id);
    printf("enter employee name-");
    fflush(stdin);
    gets(e->name);
    printf("enter employee salary-");
    scanf("%d",&e->salary);
}
void dispaly(struct employee e)
{
    printf("id is=%d\n",e.id);
    printf("name is=%s\n",e.name);
    printf("salary is=%d\n",e.salary);
}
int main()
{
    struct employee y;
    input(&y);
    printf("employee detais is:-\n");
    dispaly(y);
    getch();
    return 0;
}
