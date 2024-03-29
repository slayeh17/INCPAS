#include<stdio.h>
void sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int cur=a[i];
        int j=i-1;
        while(j>=0 && a[j]>cur)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
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
    printf("Sorted Array:\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}