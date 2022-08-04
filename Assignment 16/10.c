#include<stdio.h>
int main()
{
    int n,m,o=0,max=0,pos;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            o++;
        }
        if(o>max)
        {
            max=o;
            pos=i;
        }
        o=0;
    }
    printf("%d row has maximum numbers of 1.",pos+1);
}