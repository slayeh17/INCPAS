#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Reverse order: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}