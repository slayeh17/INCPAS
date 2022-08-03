#include<stdio.h>
int main(){
    int a[10],min;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }

    printf("minimum number in the array is %d",min);
}
