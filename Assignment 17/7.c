#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],sr[100];
    int k=0;
    scanf("%[^\n]",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=32 && s[i]<=127 )
        k++;
    }
    printf("Number of alphabets, digits, special characters: %d",k);
    return 0;
}