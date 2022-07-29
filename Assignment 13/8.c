#include<stdio.h>
void fibo(int n)
{
    static int a=0,b=1,c=0;
    if(n==0)
    return;
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    fibo(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("0 1 ");
    fibo(n-2);
    return 0;
}