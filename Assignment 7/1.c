#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a=0,b=1,c;
  for(int i=2;i<=n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  printf("%d",c);
  return 0;
}