#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void check(int r,int c,char s[r][c])
{
    int j;
    for(int i=0;i<r;i++)
    {
        for(j=0;j<(strlen(s[i]));j++)
        {
            if(s[i][j]=='@')
            break;
        }
        if(j==(strlen(s[i])))
        printf("\n%s is invalid",s[i]);
    }
}
int main()
{
    int r;
    scanf("%d",&r);
    fflush(stdin);
    char s[r][1000];
    for(int i=0;i<r;i++)
    {
        scanf("%[^\n]",s[i]);
        fflush(stdin);
    }
    check(r,1000,s);
    return 0;
}