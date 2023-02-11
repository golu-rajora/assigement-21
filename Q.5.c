//5. Write a function to sort employees according to their salaries [ refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
};
void input(struct employee *e)
{
    for(int i=0;i<10;i++)
    {
      printf("enter %d employee salary-",i+1);
      scanf("%d",&e[i].salary);
    }
}
 void sort(struct employee *y,int size)
 {
     struct employee t;
     for(int i=0;i<size-1;i++)
     {
         for(int j=i+1;j<size;j++)
         {
             if(y[i].salary>y[j].salary)
             {

                 t=y[i];
                 y[i]=y[j];
                 y[j]=t;
             }
         }
     }
     for(int i=0;i<size;i++)
        printf("%d\n",y[i]);
 }
 int main()
 {
     struct employee e[10];
     input(&e);
     printf("sort the salary is:-\n");
     sort(e,10);
     getch();
     return 0;
 }
