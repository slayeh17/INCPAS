#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(int r,int c,char s[r][c])
{
    for(int i=1;i<r;i++)
    {
        int j=i-1;
        char cur[c];
        strcpy(cur,s[i]);
        while(j>=0 && strcmp(s[j],cur)>0)
        {
            strcpy(s[j+1],s[j]);
            j--;
        }
        strcpy(s[j+1],cur);
    }
}
int main()
{
    char s[10][1000];
    for(int i=0;i<10;i++)
    {
        scanf("%[^\n]",s[i]);
        fflush(stdin);
    }
    sort(10,1000,s);
    for(int i=0;i<10;i++)
    printf("%s ",s[i]);
    return 0;
}