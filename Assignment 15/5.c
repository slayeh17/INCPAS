#include<stdio.h>
int duplicate(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        return a[i];
    }
    return -909090;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(duplicate(a,n)!=-909090)
    {
        printf("%d",duplicate(a,n));
    }
    else
    printf("Adjacent duplicate element not found.");
    return 0;
}