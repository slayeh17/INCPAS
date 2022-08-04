#include<stdio.h>
int main()
{
    int n,m,zc=0,zo=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            zc++;
            else
            zo++;
        }
    }
    printf(zc>zo?"Sparse Matrix":"Not a sparse matrix");
}