#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {

  int s=0;
  for(int i=1;i<n;i++)
  s=s+i;
  
  int and[s],or[s],xor[s]; int h=0;
  //Filling and[],or[],xor[];
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=n;j++)
      {
          if(j>i)
          {
              and[h] = i&j;
              or[h] = i|j;
              xor[h] = i^j;
              h++;
          }
      }
  }
  //Calculating number < k in and[]
  int max=0;
  for(int i=0;i<h;i++)
  {
      if(and[i]>max)
      {
          if(and[i]<k)
          {
              max=and[i];
          }
      }
  }
  printf("%d\n",max);
  max=0;
  //Calculating number < k in or[]
  for(int i=0;i<h;i++)
  {
      if(or[i]>max)
      {
          if(or[i]<k)
          {
              max=or[i];
          }
      }
  }
  printf("%d\n",max);
  max=0;
  //Calculating number < k in xor[]
  for(int i=0;i<h;i++)
  {
      if(xor[i]>max)
      {
          if(xor[i]<k)
          {
              max=xor[i];
          }
      }
  }
  printf("%d\n",max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
