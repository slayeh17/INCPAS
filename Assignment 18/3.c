#include<stdio.h>
#include<string.h>
int compare(char s[],char ss[])
{
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]!=ss[i])
        return 1;
    }
    return 0;
}
int main()
{
    char s[100],ss[100];
    scanf("%[^\n]",s);
    fflush(stdin);
    scanf("%[^\n]",ss);
    printf(compare(s,ss)?"Not Same":"Same");
    return 0;
}