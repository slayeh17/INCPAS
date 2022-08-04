#include<stdio.h>
void read_reverse()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Reversed Array:\n");
    for(int i=n-1;i>=0;i--)
    printf("%d ",a[i]);
}
int main()
{
    read_reverse();
    return 0;
}