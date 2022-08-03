#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n],a2[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<=n;i++)
    a2[i]=a[i];
    for(int i=0;i<n;i++)
    printf("%d ",a2[i]);
    return 0;
}
