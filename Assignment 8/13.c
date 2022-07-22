#include<stdio.h>
int main()
{
  for(int i=1;i<=7;i++)
  {
    for(int j=1;j<=(7-i)+1;j++)
    printf("%c ",64+j);
    for(int s=2;s<2*i-1;s++)
    printf("  ");
    for(int j=(7-i)+1;j>=1;j--)
    {
      if(j==7)
      continue;
      printf("%c ",64+j);
    }
    printf("\n");
  }
  return 0;
}