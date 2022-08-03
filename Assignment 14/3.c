#include<stdio.h>
int main(){
    int a[10],se=0,so=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        se=se+(a[i]%2==0?a[i]:0);
        so=so+(a[i]%2!=0?a[i]:0);
    }
    printf("Sum of even numbers: %d\nSum of odd numbers: %d",se,so);
}
