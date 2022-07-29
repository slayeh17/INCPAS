#include<stdio.h>
int rec_digitsum(int n)
{
    if(n!=0)
    return (n%10)+rec_digitsum(n/10);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",rec_digitsum(n));
    return 0;
}