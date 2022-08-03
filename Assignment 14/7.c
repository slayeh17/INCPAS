#include<stdio.h>
void sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int cur=a[i];
        int j=i-1;
        while(j>=0 && a[j]<cur)
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
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    for(int i=0;i<n;i++)
    {
        int max=a[0];
        if(a[i]-max!=0)
        {
            printf("%d is the second largest number in the array.",a[i]);
            break;
        }
    }
    return 0;
}
