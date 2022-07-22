#include<stdio.h>
int main()
{
  for(int i=1;i<=5;i++)
  {
    for(int s=5;s>i;s--)
    printf(" ");
    for(int j=1;j<=2*i-1;j++)
    {
      if((j==1 || j==2*i-1)&&i<5)
      printf("*");
      else if(i==5)
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}