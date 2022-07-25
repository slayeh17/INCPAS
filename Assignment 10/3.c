#include<stdio.h>
int oe(int n)
{
    return (n%2==0);
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf(oe(n)?"Even":"Odd");
    return 0;
}