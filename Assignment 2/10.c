#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",a-(a%10));
    return 0;
}