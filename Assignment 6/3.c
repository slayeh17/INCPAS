#include<stdio.h>
int main()
{
  int n,s=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  s=s+(2*i-1);
  printf("%d",s);
  return 0;
}