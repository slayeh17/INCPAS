#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string[1000];
    scanf("%[^\n]",string);
    printf("Reverse order: ");
    for(int i=strlen(string);i>=0;i--)
    {
        printf("%c",*(string+i));
    }
    return 0;
}