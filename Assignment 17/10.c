#include<stdio.h>
#include<string.h>
void sort(char a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        char cur=a[i];
        while(j>=0 && cur<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
    a[n+1]='\0';
}
void freq(char a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
        if(a[i]!=a[i+1] && a[i]!=32)
        printf("Frequency of %c: %d\n",a[i],c);
        c=0;
    }
}
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    int n=strlen(s);
    sort(s,n);
    freq(s,n);
    return 0;
}