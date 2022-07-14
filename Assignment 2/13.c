#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int u=a%10;
    int t=((a%100)-u)/10;
    int h=(a-(a%100))/100;
    a=u*100+h*10+t;
    printf("%d",a);
    return 0;
}