#include<stdio.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(c>='a' && c<='z')
  printf("%c is in Lower Case",c);
  else
  printf("%c is in Upper Case",c);
  return 0;
}