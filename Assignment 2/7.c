#include<stdio.h>
int main()
{
  int a,c=1;
  scanf("%d",&a);
  while(1)
  {
    if(a&1==1)
    break;
    else
    {
      a=a>>1;
      c++;
    }
  }
  printf("%d",c);
  return 0;
}