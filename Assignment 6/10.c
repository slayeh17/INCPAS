#include<stdio.h>
int main()
{
  int a,s=0,x;
  scanf("%d",&a);
  x=a;
  while(a>0)
  {
    int d=a%10;
    s=s*10+d;
    a=a/10;
  }
  printf("%d",s);
  return 0;
}