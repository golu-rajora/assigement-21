//8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    int marks;
}s[10];
int main()
{
    for(int i=0;i<10;i++)
       {
         printf("enter %d student details:-",i+1);
         printf("\nenter roll no-");
         scanf("%d",&s[i].roll_no);
         printf("enter name- ");
         fflush(stdin);
         gets(s[i].name);
         printf("enter marks-");
         scanf("%d",&s[i].marks);
       }
       printf("all students detalis this:-\n");
       for(int i=0;i<10;i++)
       {
           printf("%d student detalis is:::-\n",i+1);
           printf("roll no-%d ",s[i].roll_no);
           printf(" name-%s",s[i].name);
           printf(" marks-%d\n",s[i].marks);
       }
       getch();
       return 0;

}
