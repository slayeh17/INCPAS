#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  printf(a%3==0 && a%2==0?"It is divisible by 3 and 2":"It is not divisible by 3 and 2");
  return 0;
}