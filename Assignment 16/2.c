#include<stdio.h>
int main()
{
    int n=3;
    int a[n][n],b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    int c[n][n],s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                s=s+a[i][k]*b[k][j];
                c[i][j]=s;
            }
        s=0;
        }
    }
    printf("Product:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}