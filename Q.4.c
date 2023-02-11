//4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
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
 int max(struct employee y[])
 {
     int max=-1;
     for(int i=0;i<10;i++)
     {
         if(y[i].salary>max)
           max=y[i].salary;

     }
     return max;
 }
 int main()
 {
     struct employee e[10];
     int y;
     input(&e);
     y=max(e);
     printf("highest salary is=%d",y);
     getch();
     return 0;
 }
