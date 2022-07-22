#include<stdio.h>
int main()
{
  int a,f=0;
  scanf("%d",&a);
  for(int i=a+1;;i++)
  {
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("%d",i);
        break;
    }
    f=0;
  }
  return 0;
}