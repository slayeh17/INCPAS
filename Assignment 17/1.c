#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    int i=0,c=0;
    while(s[i]!='\0')
    {
        c++;
        i++;
    }
    printf("Length: %d",c);
    return 0;
}