#include<stdio.h>
int main()
{
  int s,f=0;
  printf("Enter the number to be searched: ");
  scanf("%d",&s);
  int a=0,b=1,c=0;
  while(1 && c<=s)
  {
    if(s==0 || s==1)
    {
        f=1;
        break;
    }
    c=a+b;
    if(s==c)
    {
        f=1;
        break;
    }
    a=b;
    b=c;
  }
  if(f!=1)
  printf("%d is not in the series",s);
  else
  printf("Found the number in the series!");


  return 0;
}