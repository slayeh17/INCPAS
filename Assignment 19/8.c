#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int distance(int n,char words[n][1000],char w1[],char w2[],int l1,int l2)
{
    char s[1000];
    int pos1,pos2;
    for(int i=0;i<n;i++)
    {
        if(strcmp(words[i],w1)==0)
        pos1=i;
        else if(strcmp(words[i],w2)==0)
        pos2=i;
    }
    return pos2-pos1;
}
int main()
{
    int n;
    scanf("%d",&n);
    fflush(stdin);
    char string[n][1000];
    char w1[1000],w2[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%[^\n]",string[i]);
        fflush(stdin);
    }
    printf("Enter the two words:\n");
    scanf("%[^\n]",w1);
    fflush(stdin);
    scanf("%[^\n]",w2);
    printf("Distance: %d",distance(n,string,w1,w2,strlen(w1),strlen(w2)));
    return 0;
}