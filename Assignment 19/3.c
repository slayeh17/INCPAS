#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int r,c=1000;
    scanf("%d",&r);
    fflush(stdin);
    char s[r][c];
    for(int i=0;i<r;i++)
    {
        scanf("%[^\n]",s[i]);
        fflush(stdin);
    }
    for(int i=0;i<r;i++)
    printf("%s\n",s[i]);
    return 0;
}