#include<stdio.h>
int rec_sum(int n)
{
    if(n>0)
    n=n+rec_sum(n-1);
    if(n==0)
    return 0;
    return n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",rec_sum(n));
    return 0;
}