#include<stdio.h>
void sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int cur=a[i];
        while(j>=0 && cur<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
}
void unique(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        continue;
        else
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    unique(a,n);
    return 0;
}