//6. Write a function to sort employees according to their names [refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
};
 void sort(struct employee *e)
 {
       struct employee t;
      for(int i=0;i<5-1;i++)
      {
          for(int j=i+1;j<5;j++)
          {
             if(strcmp(e[i].name,e[j].name)>0)
              {
                 t=e[i];
                 e[i]=e[j];
                 e[j]=t;
              }
          }
      }
      for(int i=0;i<5;i++)
      {
          printf("%s\n",e[i].name);
      }
 }
  int main()
  {
      struct employee e[5];
      for(int i=0;i<5;i++)
      {
          printf("enter %d employee name-",i+1);
          gets(e[i].name);
      }
      printf("sort name is:-");
     sort(e);

      getch();
      return 0;
  }
