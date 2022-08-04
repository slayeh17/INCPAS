#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],sr[100];
    int i=0;
    scanf("%[^\n]",s);
    for( i=0;i<strlen(s);i++)
    {
        sr[i]=s[i];
    }
    sr[i]='\0';
    printf("%s",sr);
    return 0;
}