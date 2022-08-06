#include<stdio.h>
#include<string.h>
void uppr(char s[])
{
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]>=97 && s[i]<=122)
        s[i]=s[i]-32;
    }
    printf("%s",s);
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    uppr(s);
    return 0;
}