#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(int n,char names[n][1000],char name[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(names[i],name)==0)
        return 1;
    }
    return 0;
}
void fact()
{
    printf("Enter the number: ");
    int n,f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial: %d",f);
}
int main()
{
    int n;
    scanf("%d",&n);
    fflush(stdin);
    char string[n][1000];
    char name[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%[^\n]",string[i]);
        fflush(stdin);
    }
    printf("Enter your name:\n");
    scanf("%[^\n]",name);
    if(check(n,string,name)==1)
    fact();
    else
    printf("Your name is not in the list.");
    return 0;
}