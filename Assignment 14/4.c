#include<stdio.h>
int main(){
    int a[10],max;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    printf("Maximum number in the array is %d",max);
}
