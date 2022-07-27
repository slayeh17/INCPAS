#include<stdio.h>
int reverse(int n)
{
    static int s=0;
    if(n==0)
    return s;
    s=s*10+n%10;
    reverse(n/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}