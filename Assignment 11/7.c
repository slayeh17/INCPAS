#include<stdio.h>
void fibo(int n)
{
    int a=0,b=1,c;
    n=n-2;
    printf("0 1 ");
    while(n--)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fibo(n);
    return 0;
}