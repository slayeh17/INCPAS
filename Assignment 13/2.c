#include<stdio.h>
int rec_oddnum(int n)
{
    if(n!=0)
    return (2*n-1)+rec_oddnum(n-1);
    return 0;  
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",rec_oddnum(n));
    return 0;
}