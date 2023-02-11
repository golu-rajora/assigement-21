//9. Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    int marks;
};
int main()
{
    struct student *p;
    int n;
    printf("how many records to be enter:-");
    scanf("%d",&n);
    p=(struct student *)calloc(n,sizeof(struct student));

    for(int i=0;i<n;i++)
       {
         printf("enter %d student details:-",i+1);
         printf("\nenter roll no-");
         scanf("%d",&p[i].roll_no);
         printf("enter name- ");
         fflush(stdin);
         gets(p[i].name);
         printf("enter marks-");
         scanf("%d",&p[i].marks);
       }
       printf("all students detalis this:-\n");
         for(int i=0;i<n;i++)
       {
           printf("%d student detalis is:-\n",i+1);
           printf("roll no-%d ",p[i].roll_no);
           printf(" name-%s",p[i].name);
           printf(" marks-%d\n",p[i].marks);
       }
       getch();
       return 0;

}
