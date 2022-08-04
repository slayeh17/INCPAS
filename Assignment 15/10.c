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
void freq(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
        if(a[i]!=a[i+1])
        printf("Frequency of %d: %d\n",a[i],c);
        c=0;
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
    freq(a,n);
    return 0;
}