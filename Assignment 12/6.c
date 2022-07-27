#include<stdio.h>
void rec_natural(int n)
{
    if(n==0)
    return;
    printf("%d ",2*n);
    rec_natural(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    rec_natural(n);
    return 0;
}