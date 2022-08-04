#include<stdio.h>
int min(int a[],int n)
{
    int minn=a[0];
    for(int i=0;i<n;i++)    
    {
        if(a[i]<minn)
        minn=a[i];
    }
    return minn;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Smallest number in the array is %d",min(a,n));
    return 0;
}