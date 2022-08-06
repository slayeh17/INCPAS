#include<stdio.h>
int len(char s[])
{
    int c=0,i=0;
    while(s[i]!='\0')
    {
        c++;
        i++;
    }
    return c;
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    printf("length: %d",len(s));
    return 0;
}