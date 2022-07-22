#include<stdio.h>
int main()
{
    int n=5;
    for(int i=n-2;i<=n;i++)
    {
        for(int s=i;s<n;s++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++)
        printf("*");
        for(int s=2*i-2;s<=2*n-1;s++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    for(int i=1;i<n+2;i++)
    printf("*");
    printf("MySirG");
    for(int i=1;i<=n+2;i++)
    printf("*");
    printf("\n");
    for(int i=1;i<=2*n-1;i++)
    {
        for(int s=1;s<=i;s++)
        printf(" ");
        for(int j=3*n+2;j>=2*i-1;j--)
        printf("*");
        printf("\n");
    }
    
    return 0;
}