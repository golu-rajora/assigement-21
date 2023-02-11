//2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
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
int main()
{
    struct employee y;
    input(&y);
    getch();
    return 0;
}


