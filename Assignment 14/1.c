#include<stdio.h>
int main(){
    int a[10],s=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("SUM: %d",s);
}
