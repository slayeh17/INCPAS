#include<stdio.h>
int main()
{
  for(int i=1;i<=5;i++)
  {
    for(int s=1;s<i;s++)
    printf(" ");
    for(int j=2*5-1;j>=(2*i-1);j--)
    {
        if(i==1)
        printf("*");
        else if(i>1 && (j==2*5-1  || j==2*i-1))
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}