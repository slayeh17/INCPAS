#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the coefficients: \n");
  scanf("%d%d%d",&a,&b,&c);
  int s=b*b-4*a*c;
  if(s>0)
  printf("The roots are real and distinct");
  if(s==0)
  printf("The roots are real and equal");
  if(s<0)
  printf("The roots are imaginary");  
  return 0;
}