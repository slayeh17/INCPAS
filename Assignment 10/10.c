#include<stdio.h>
int prime(int p)
{
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
        return 0;
    }
    return 1;
}
void prime_factors(int n)
{
    int p=2,s=1,x=n;
    while(1)
    {
        if(prime(p) && n%p==0)
        {
            printf("%d ",p);
            n=n/p;
            s=s*p;
            if(s==x)
            return;
        }
        else
        p=p+1;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime_factors(n);
    return 0;
}