#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n%2==0?n+1:n);
    return 0;
}