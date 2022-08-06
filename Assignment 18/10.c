#include<stdio.h>
#include<string.h>
char repeated(char s[],int len)
{
    char r;
    int max=0;
    for(int i=0;i<len;i++)
    {
        int c=0;
        for(int j=0;j<len;j++)
        {
            if(s[i]==s[j] && s[i]!=' ')
            c++;    
        }
        if(c>max)
        {
            max=c;
            r=s[i];
        }
    }
    return r;
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    char a=repeated(s,strlen(s));
    printf("Repeated Character: %c",a);
    return 0;
}