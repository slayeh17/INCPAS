#include<stdio.h>
void printnodd(int n)
{
    if(n==0)
    return;
    printnodd(n-1);
    printf("%d ",2*n-1);    
}
int main()
{
    int n;
    scanf("%d",&n);
    printnodd(n);
    return 0;
}