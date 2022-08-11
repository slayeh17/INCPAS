#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int dots(int r,char s[])
{
    int c=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        c++;
    }
    return c;
}
int segments(int r,char s[])
{
    int n=strlen(s);
    char ss[n];
    strcpy(ss,s);
    strcat(ss,".");
    ss[n+1]='\0';
    int k=0,c=1;
    char seg[strlen(ss)];
    for(int i=0;i<strlen(ss);i++)
    {
        if(ss[i]!='.')
        {
            seg[k]=ss[i];
            k++;
        }
        else
        {
            int a=atoi(seg);
            if(a<0 && a>255)
            return 0;
            k=0;
            c++;
        }
    }
    return c;
}
void IP(int r,int c,char s[r][c])
{
    for(int i=0;i<r;i++)
    {
        if(dots(r,s[i])!=3)
        {
            printf("%s is Invalid\n",s[i]);
            continue;
        }
        if(segments(r,s[i])!=4)
        {
            printf("%s is Invalid\n",s[i]);
            continue;
        }
        for(int j=0;j<strlen(s[i]);j++)
        {
            if(s[i][j]<'0' && s[i][j]>'9' && s[i][j]!='.')
            {
                printf("%s is Invalid\n",s[i]);
                break;
            }
        }
    }
}
int main()
{
    int r;
    scanf("%d",&r);
    fflush(stdin);
    char s[r][1000];
    for(int i=0;i<r;i++)
    {
        scanf("%[^\n]",s[i]);
        fflush(stdin);
    }
    IP(r,1000,s);
    return 0;
}