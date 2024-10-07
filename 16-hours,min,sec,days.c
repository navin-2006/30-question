#include<stdio.h>
int main()
{
    int days,hours,minutes,seconds,total;
    scanf("%d",&days);
    scanf("%d",&hours);
    scanf("%d",&minutes);
    scanf("%d",&seconds);
    total=(days*86400+minutes*60+hours*3600+seconds);
    printf("total number of seconds %d",total);
}
