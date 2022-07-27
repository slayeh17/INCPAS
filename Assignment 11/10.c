#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int fact_sum(int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    s=s+fact(i);
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("1!/1 ");
    for(int i=2;i<=n;i++)
    printf("+ %d!/%d ",i,i);
    printf(" = %d",fact_sum(n));
    return 0;
}