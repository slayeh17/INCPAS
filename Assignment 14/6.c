#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<10;i++)
    {
        int j=i-1,cur=a[i];
        while(j>=0 && cur<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
    printf("Sorted Array: ");
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
}
