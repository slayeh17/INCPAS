#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],sr[100];
    int k=0;
    scanf("%[^\n]",s);
    for(int i=strlen(s)-1;i>=0;i--)
    {
        sr[k]=s[i];
        k++;
    }
    sr[k]='\0';
    printf("%s",sr);
    return 0;
}