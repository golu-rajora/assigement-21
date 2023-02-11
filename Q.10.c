//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student
#include<stdio.h>
#include<string.h>
struct marks
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
 int main()
 {
     struct marks m[5];
     float a;
     for(int i=0;i<5;i++)
     {
         printf("enter %d student detalis:-\n",i+1);
         printf("enter roll no-");
         scanf("%d",&m[i].roll_no);
         printf("enter name-");
         fflush(stdin);
         gets(m[i].name);
         printf("enter chemistry marks-");
         scanf("%d",&m[i].chem_marks);
         printf("enter maths marks-");
         scanf("%d",&m[i].maths_marks);
         printf("enter physics marks-");
         scanf("%d",&m[i].phy_marks);
     }
     for(int i=0;i<5;i++)
     {
         printf("%d students marks and percentange",i+1);
         printf("\nchem marks-%d\nmaths marks-%d\nphy marks-%d\n",m[i].chem_marks,m[i].maths_marks,m[i].phy_marks);
         a=(m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/3.0;
         printf("then percentage is=%f\n",a);
     }
     getch();
     return 0;
 }
