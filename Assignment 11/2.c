#include<stdio.h>
int HCF(int a,int b)
{
    for(int i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        return i;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("HCF: %d",HCF(a,b));
    return 0;
}