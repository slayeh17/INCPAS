#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a/100>=1 && a/100<=9)
  printf("%d is a 3-digit number.",a);
  else
  printf("%d is not a 3-digit number.",a);
  return 0;
}