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
        s=s + *(arr+i);
    }
    printf("Sum: %d",s);
    return 0;
}