#include<stdio.h>
#include<string.h>
int alpnum(char s[])
{
    int c=0,d=0;
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]>=65 && s[i]<=90 ||s[i]>=97 && s[i]<=122)
            c=1;
        if(s[i]>=48 && s[i]<=57)
            d=1;
    }
    if(c+d==2)
    return 1;
    else 
    return 0;
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    printf(alpnum(s)?"Alpha Numeric":"Not Alpha Numeric");
    return 0;
}