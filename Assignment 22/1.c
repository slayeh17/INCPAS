#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void string()
{
    char *s=(char*)malloc(sizeof(char));
    int j=1,i=0;
    printf("Enter your name: ");
    s[i]=' ';   
    while(1)
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n')
        break;
        i++;
        j++;
        s=(char*)realloc(s,j*sizeof(char));
    }
    s[i]='\0';
    printf("Name: %s",s);
    free(s);
}
int main()
{
    string();
    return 0;
}   