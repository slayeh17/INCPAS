#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string[100];
    int i=0,len=0;
    scanf("%[^\n]",string);
    char *ps=string;
    while(*(ps+i)!='\0')
    {
        len++;
        i++;
    }
    printf("length: %d",len);
    return 0;
}