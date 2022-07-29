#include<stdio.h>
int dig(int n)
{
    if(n==0)
    return 0;
    return 1+dig(n/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("no. of digits: %d",dig(n));
    return 0;
}