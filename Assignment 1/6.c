#include<stdio.h>
int main()
{
   char name[100];
   printf("Enter the name of the user: ");
   scanf("%[^\n]",name);
   printf("Hello , %s",name);
   return 0;
}