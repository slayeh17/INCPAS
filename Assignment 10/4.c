#include<stdio.h>
void printn(int n)
{
    if(n==0)
    return;
    printn(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printn(n);
    return 0;
}