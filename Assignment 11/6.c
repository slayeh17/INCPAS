#include<stdio.h>
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void prime_a_b(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
       if(prime(i)) 
       printf("%d ",i);
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    prime_a_b(a,b);
    return 0;
}