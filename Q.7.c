//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};
int main()
{
    struct time t1,t2,t3;
    printf("enter first time(:) format:-");
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);
    printf("enter second time(:) format:-");
    scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);
    if(t1.sec<t2.sec)
    {
        t1.min--;
        t1.sec=60+t1.sec;
    }
    t3.sec=t1.sec-t2.sec;
    if(t1.min<t2.min)
    {
        t1.hour--;
        t1.min=60+t1.min;
    }
    t3.min=t1.min-t2.min;
    t3.hour=t1.hour-t2.hour;
    printf("difference between two time periods is:-%d:%d:%d",t3.hour,t3.min,t3.sec);
    getch();
    return 0;

}
