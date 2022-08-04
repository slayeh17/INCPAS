#include<stdio.h>
int main()
{
    char s[100],cs;
    scanf("%[^\n]",s);
    fflush(stdin);
    scanf("%c",&cs);
    int i=0,c=0;
    while(s[i]!='\0')
    {
        if(s[i]==cs)
        c++;
        i++;
    }
    printf("Number of occurences: %d",c);
    return 0;
}