#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
#define v 8
int main()
{
    union time
    {
        int hour;
        int mins;
        int secs;
        char month[v];
        char day[v];
        int year;
    }s;
    struct time1
    {
        union time s;
    }t;
printf("Size of the Structure is:%ld\n",sizeof(t));
printf("Enter the hour:\n");
scanf("%d",&t.s.hour);
printf("%d\n",t.s.hour);
printf("Enter the mins:\n");
scanf("%d",&t.s.mins);
printf("%d\n",t.s.mins);
printf("Enter the secs:\n");
scanf("%d",&t.s.secs);
printf("%d\n",t.s.secs);
printf("Enter the day:\n");
scanf("%s",t.s.day);
printf("%s\n",t.s.day);
printf("Enter the month:\n");
scanf("%s",t.s.month);
printf("%s\n",t.s.month);
printf("Enter the year:\n");
scanf("%d",&t.s.year);
printf("%d\n",t.s.year);
}
