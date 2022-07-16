#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and=0,max_or=0,max_xor=0;
  for(int a=1;a<n;a++)
  {
      for(int b=a+1;b<=n;b++)
      {
          //For AND
          int and=a&b;
          if(max_and<and && and<k)
          max_and=and;
          //For OR
          int or=a|b;
          if(max_or<or && or<k)
          max_or=or;
          //For XOR
          int xor=a^b;
          if(max_xor<xor && xor<k)
          max_xor=xor;
      }
  }
  printf("%d\n%d\n%d",max_and,max_or,max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
