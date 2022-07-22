#include<stdio.h>
int main()
{
  for(int i=1;i<=4;i++)
  {
    for(int j=1;j<=(4-i)+1;j++)
    printf("%d",j);
    for(int s=2;s<2*i-1;s++)
    printf(" ");
    for(int j=(4-i+1);j>=1;j--)
    {
      if(j==4)
      continue;
      printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}