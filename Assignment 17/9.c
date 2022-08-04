#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    int n=strlen(s);
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        char cur=s[i];
        while(j>=0 && cur<s[j])
        {
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=cur;
    }
    s[n+1]='\0';
    printf("%s",s);
    return 0;
}