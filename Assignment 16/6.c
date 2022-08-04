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
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            s=s+a[i][j];
            s1=s1+a[j][i];
        }
        printf("SUM of row %d: %d\n",i+1,s);
        printf("SUM of column %d: %d\n",i+1,s1);
        s=0;s1=0;
    }
}