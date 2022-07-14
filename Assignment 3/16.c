#include<stdio.h>
int main()
{
  char c;
  int d=0;
  scanf("%c",&c);
  if(c>='a' && c<='z')
  { printf("%c is an alphabet in Lower Case",c); d=1;}
  if(c>='A' && c<='Z')
  { printf("%c is an alphabet in Upper Case",c); d=1;}
  if(c>='0'&&c<='9')
  { printf("%c is digit",c); d=1;}
  if(d==0)
  printf("%c is a special character",c);
  return 0;
}