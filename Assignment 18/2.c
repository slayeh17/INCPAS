#include<stdio.h>
#include<string.h>
void rev(char s[])
{
    char r[100];
    int k=0;
    for(int i=strlen(s)-1;i>=0;i--)
    {
        r[k]=s[i];
        k++;
    }
    r[k]='\0';
    puts(r);
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    rev(s);
    return 0;
}