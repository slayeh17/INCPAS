#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  printf(a%7==0 || a%3==0?"It is divisible":"It is not divisible");
  return 0;
}