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
void prime_nums(int n)
{
    int i=2;
    while(n--)
    {
       if(prime(i)) 
       printf("%d ",i);
       i++;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    prime_nums(n);   
    return 0;
}