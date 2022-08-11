#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][1000];
    for(int i=0;i<5;i++)
    {
        scanf("%[^\n]",s[i]);
        fflush(stdin);
    }
    for(int i=0;i<5;i++)
    {
        int c=0;
        for(int j=0;j<strlen(s[i]);j++)
        {
            if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='o'||s[i][j]=='i'||s[i][j]=='u')
            c++;
        }
        printf("%s has %d vowels\n",s[i],c);
    }
    return 0;
}