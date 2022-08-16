#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string[100];
    int i=0,c=0,v=0;
    scanf("%[^\n]",string);
    char *ps=string;
    while(*(ps+i)!='\0')
    {
        if(*(ps+i)=='a'||*(ps+i)=='e'||*(ps+i)=='i'||*(ps+i)=='o'||*(ps+i)=='u')
        v++;
        else
        c++;
        i++;
    }
    printf("Number of vowels: %d\nNumber of consonants: %d",v,c);
    return 0;
}