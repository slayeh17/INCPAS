#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
void PASCAL(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int s=n;s>i;s--)
        printf(" ");
        printf("%d ",1);
        for(int j=1;j<=i;j++)
        printf("%d ",fact(i)/(fact(i-j)*fact(j)));
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    PASCAL(n);
    return 0;
}