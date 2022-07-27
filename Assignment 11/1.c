#include<stdio.h>
int LCM(int a,int b)
{
    for(int i=a>b?a:b;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        return i;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("LCM: %d",LCM(a,b));
    return 0;
}