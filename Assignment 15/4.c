#include<stdio.h>
#include<string.h>
void left(int a[],int n,int e)
{
    while(e--)
    {
        int i=a[0],j;
        for(j=1;j<n;j++)
        {
            a[j-1]=a[j];
        }
        a[j-1]=i;
    }
}
void right(int a[],int n,int e)
{
    while(e--)
    {
        int i=a[n-1],j;
        for(j=n-2;j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=i;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    char d[10];int e;
    printf("Enter the rotation direction(left,right) and the number of rotations:\n");
    scanf("%s%d",d,&e);
    if(strcmp(d,"left")==0)
    left(a,n,e);
    else
    right(a,n,e);
    printf("Array after the rotation:\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}