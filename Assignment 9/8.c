#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a = n>0?1:0;
    switch(a)
    {
        case 1:printf("%d",(-1)*n);break;
        case 0:printf("%d",(-1)*n);break; 
    }
    return 0;
}