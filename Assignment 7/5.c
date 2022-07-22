#include<stdio.h>
int main()
{
  int a,b,fa=0,fb=0;
  scanf("%d%d",&a,&b);
  for(int i=1;i<(a>b?a:b);i++)
  {
    if(a%i==0 && b%i==0)
    fa++;
    if(fa>1)
    break;
  }
  
  if(fa==1)
  printf("%d and %d are co-prime.",a,b);
  else
  printf("%d and %d are not co-prime.",a,b);
  return 0;
}