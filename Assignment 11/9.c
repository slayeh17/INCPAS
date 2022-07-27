#include<stdio.h>
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Square of %d is %d",n,square(n));
    return 0;
}