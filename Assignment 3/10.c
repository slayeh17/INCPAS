#include<stdio.h>
int main()
{
  float cp,sp,d;
  printf("Enter the Cost Price: ");
  scanf("%f",&cp);
  printf("Enter the Selling Price: ");
  scanf("%f",&sp);
  if(cp>sp)
  {
    d=cp-sp;
    printf("Loss: %.02f%%",(d/cp)*100);
  }
  else 
  {
    d=sp-cp;
    printf("Profit: %.02f%%",(d/cp)*100);
  }

  return 0;
}