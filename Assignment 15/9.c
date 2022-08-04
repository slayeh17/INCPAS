#include<stdio.h>
void merge(int a[],int b[],int n)
{
    int c[1000]={1},k=0;
    for(int i=0;i<n;i++)
    c[i]=a[i];
    for(int i=0;i<n;i++)
    {
        int j=2*n-2;
        for(;j>=0;j--)
        {
            if(c[j]<b[i])
            c[j+1]=c[j];
            else
            break;
        }
        c[j+1]=b[i];
    }
    for(int i=0;i<2*n;i++)
    printf("%d ",c[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a1[n],a2[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a1[i]);
    for(int i=0;i<n;i++)
    scanf("%d",&a2[i]);
    merge(a1,a2,n);
    return 0;
}