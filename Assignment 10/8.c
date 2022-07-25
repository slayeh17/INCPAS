#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int P(int n,int r)
{
    return fact(n)/fact(n-r);
}
int main()
{
    int n,r;
    printf("Enter total number of items and number of selected items: ");
    scanf("%d%d",&n,&r);
    printf("Number of arrangements: %d",P(n,r));
    return 0;
}