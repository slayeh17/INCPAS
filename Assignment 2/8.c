#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf(a&1 ? "Odd" : "Even");
    return 0;
}