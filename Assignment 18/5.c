#include<stdio.h>
#include<string.h>
void lwr(char s[])
{
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]>=65 && s[i]<=90)
        s[i]=s[i]+32;
    }
    printf("%s",s);
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    lwr(s);
    return 0;
}