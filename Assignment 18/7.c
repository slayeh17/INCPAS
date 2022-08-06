#include<stdio.h>
#include<string.h>
int palindrome(char s[])
{
    char r[100];
    int k=0;
    for(int i=strlen(s)-1;i>=0;i--)
    {
        r[k]=s[i];
        k++;
    }
    r[k]='\0';
    if(strcmp(r,s)==0)
    return 1;
    else 
    return 0;
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    printf(palindrome(s)?"Palindrome":"Not Palindrome");
    return 0;
}