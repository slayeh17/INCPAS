#include<stdio.h>
int hcf(int a,int b)
{
    if(a==0)
    return b;
    return hcf(b%a,a);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("HCF: %d",hcf(a,b));
}