#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>=97 && s[i]<=122)
        s[i]=s[i]-32;
        else
        s[i]=s[i];
        i++;
    }
    printf("%s",s);
    return 0;
}