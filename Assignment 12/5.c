#include<stdio.h>
void rec_natural(int n)
{
    if(n==0)
    return;
    rec_natural(n-1);
    printf("%d ",2*n);
}
int main()
{
    int n;
    scanf("%d",&n);
    rec_natural(n);
    return 0;
}