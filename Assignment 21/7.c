#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct time
{
    int hour;
    int min;
    int sec;
}time;
time diff(time t1,time t2)
{
    time r;
    int carry;
    if(t1.hour>t2.hour)
    {
        if(t1.sec>t2.sec)
        {
            r.sec=t1.sec-t2.sec;
            carry=0;
        }
        else
        {
            r.sec=(t1.sec+60)-t2.sec;
            carry=1;
        }
        if(t1.min>t2.min)
        {
            r.min=(t1.min-carry)-t2.min;
            carry=0;
        }
        else
        {
            r.min=(t1.min+60-carry)-t2.min;
            carry=1;
        }
        r.hour=(t1.hour-carry)-t2.hour;
    }
    return r;
}
int main()
{
    time t,t1,result;
    printf("Enter start time in format 'HH:MM::SS' : ");
    scanf("%d:%d:%d",&t.hour,&t.min,&t.sec);
    printf("Enter end time in format 'HH:MM::SS' : ");
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);
    result=diff(t1,t);
    printf("Difference: %d:%d:%d",result.hour,result.min,result.sec);
    return 0;
}
