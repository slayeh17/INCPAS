#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    int i=0,c=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        c++;
        i++;
    }
    printf("Number of vowels: %d",c);
    return 0;
}