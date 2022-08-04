#include<stdio.h>
int max(int a[],int n)
{
    int maxx=a[0];
    for(int i=0;i<n;i++)    
    {
        if(a[i]>maxx)
        maxx=a[i];
    }
    return maxx;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Greatest number in the array is %d",max(a,n));
    return 0;
}