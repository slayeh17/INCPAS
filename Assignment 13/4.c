#include<stdio.h>
int rec_sqnum(int n)
{
    if(n!=0)
    return n*n+rec_sqnum(n-1);
    return 0;  
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",rec_sqnum(n));
    return 0;
}