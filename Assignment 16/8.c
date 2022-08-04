#include<stdio.h>
int main()
{
    int n,m,s=0,s1=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((j==0 || i==n-1) && i!=j)
            printf("  ");
            else 
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}