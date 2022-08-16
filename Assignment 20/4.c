#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *p,a=90;
    p=&a;
    printf("\nDeclaration of a pointer: int *p");
    printf("\nLet a variable int a=90 then to use pointer we have to p=&a");
    printf("\nNow p stores the address of a i.e., %p",p);
    printf("\nTo access the value stored in a using pointer p we use * operator\n\t\t *p = %d",*p);
    printf("\nWe can also change the value stored in a using the pointer p");
    printf("\n\t\t *p=any new value -- say *p=50");
    *p=50;
    printf("\nNow the value stored in a is %d",a);
    return 0;
}