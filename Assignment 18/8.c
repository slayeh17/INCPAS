#include<stdio.h>
#include<string.h>
int words(char s[])
{
    int k=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        k++;
    }
    return k+1;
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    printf("No. of words: %d",words(s));
    return 0;
}