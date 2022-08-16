#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *pa,*pb;
    pa=&a;
    pb=&b;
    if(*pa>*pb)
    printf("%d is greater than %d",*pa,*pb);
    else
    printf("%d is greater than %d",*pb,*pa);
    return 0;
}