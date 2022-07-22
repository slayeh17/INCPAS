#include<stdio.h>
int main()
{
  int n,c=0;
  scanf("%d",&n);
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    { c=1; break; }
  }
  printf(c==0 && n!=1?"Prime":"Not Prime");
  return 0;
}