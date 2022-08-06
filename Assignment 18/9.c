#include<stdio.h>
#include<string.h>
void word_reverse(char s[],int len)
{
    char word[100];
    char sen[len];
    strcpy(sen,"\0");
    int k=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
            word[k]=s[i];
            k++;
        }
        else
        {
            word[k]='\0';
            strrev(word);
            strcat(sen,word);
            strcat(sen," ");
            k=0;
        }
    }
    printf("%s",sen);

}
int main()
{
    char s[1000];
    scanf("%[^\n]",s);
    int n=strlen(s);
    strrev(s);
    s[n]=' ';
    s[n+1]='\0';
    word_reverse(s,strlen(s));
    return 0;
}