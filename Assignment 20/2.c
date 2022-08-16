#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *x,char *y)
{
    char t[100];
    strcpy(t,x);
    strcpy(x,y);
    strcpy(y,t);
}
int main()
{
    char a[100],b[100];
    scanf("%[^\n]",a);
    fflush(stdin);
    scanf("%[^\n]",b);
    swap(a,b);
    printf("%s %s",a,b);
    return 0;
}