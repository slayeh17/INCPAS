#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(int *ptr,int size)
{
    for(int i=1;i<size;i++)
    {
        int j=i-1;
        int cur=*(ptr+i);
        while(j>=0 && cur<*(ptr+j))
        {
            *(ptr+j+1)=*(ptr+j);
            j--;
        }
        *(ptr+j+1)=cur;
    }
}
int main()
{
    int n,*ptr;
    scanf("%d",&n);
    int a[n];
    ptr=a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Sorted Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}