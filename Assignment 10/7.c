#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int C(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    printf("Enter total number of items and number of selected items: ");
    scanf("%d%d",&n,&r);
    printf("Number of combinations: %d",C(n,r));
    return 0;
}