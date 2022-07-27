#include<stdio.h>
int p_next(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        n++;
    }
    return n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Next prime number: %d",p_next(n+1));
    return 0;
}