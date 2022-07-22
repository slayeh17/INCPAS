#include<stdio.h>
int main()
{
  for(int i='A';i<='E';i++)
  {
    for(int s='E';s>i;s--)
    printf("  ");
    for(int j='A';j<=i;j++)
    printf("%c ",j);
    for(int j=i-1;j>='A';j--)
    printf("%c ",j);
    printf("\n");
  }
  return 0;
}