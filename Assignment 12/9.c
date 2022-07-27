#include<stdio.h>
void binary(int n)
{
    if(n==0)
    return;
    binary(n/8);
    printf("%d",n%8);
}
int main()
{
    int n;
    scanf("%d",&n);
    binary(n);
    return 0;
}