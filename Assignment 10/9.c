#include<stdio.h>
int search(int n,int d)
{
    while(n>0)
    {
        int i=n%10;
        if(d==i)
        return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    int n,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the digit: ");
    scanf("%d",&d);
    printf(search(n,d)?"Found":"Not Found");
    return 0;
}