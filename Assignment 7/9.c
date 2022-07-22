#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  scanf("%d",&n);
  int x=n,c=0,a=n;
  double s=0;
  while(x>0)
  {
    x=x/10;
    c++;
  }
  while(a>0)
  {
    int d=a%10;
    s=s+pow(d,c);
    a=a/10;
  }
  if(s==n)
  printf("%d is an Armstrong Number.",n);
  else
  printf("%d is not an Armstrong Number.",n);
  return 0;
}