#include<stdio.h>
int main()
{
  for(int i=1;i<=4;i++)
  {
    for(int s=1;s<i;s++)
    printf("  ");
    for(int j=1;j<=(4-i)+1;j++)
    printf("%c ",64+j);
    for(int j=(4-i);j>=1;j--)
    printf("%c ",64+j);
    printf("\n");
  }
  return 0;
}