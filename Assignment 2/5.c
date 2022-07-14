#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    a=n%10;
    b=((n%100)-a)/10;
    c=(n-(n%100))/100;
    printf("Summation of digits in %d is %d",n,a+b+c);
    return 0;
}