#include<stdio.h>
double SI(int p,int r,int t)
{
    return (p*r*t)/100.0;
}
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    printf("SI: %.2lf",SI(p,r,t));
    return 0;
}