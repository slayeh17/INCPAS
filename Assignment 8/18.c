#include<stdio.h>
int main()
{
  for(int i=1;i<=2*5-1;i++)
  {
    if(i<=5)
    {
        for(int s=5;s>i;s--)
        printf(" ");
        for(int j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    else
    {
        int h=(2*5-1)-i+1;
        for(int s=5;s>h;s--)
        printf(" ");
        for(int j=2*h-1;j>=1;j--)
        printf("*");
        printf("\n");
    }
  }
  return 0;
}