#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void palindrome(int r,int c,char s[r][c])
{
    char temp[c];
    for(int i=0;i<r;i++)
    {
        strcpy(temp,s[i]);
        strrev(s[i]);
        if(strcmp(temp,s[i])==0)
        printf("\nPalindrome---> %s",s[i]);
        else
        printf("\nNot Palindrome---> %s",temp);
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
    palindrome(r,1000,s);
    return 0;
}