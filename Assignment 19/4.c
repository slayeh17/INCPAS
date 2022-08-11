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
int search(int r,int c,char s[r][c],char key[])
{
    sort(r,c,s);
    int mid,l=0,h=r-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(strcmp(s[mid],key)==0)
        return mid;
        else if(strcmp(s[mid],key)>0)
        h=mid-1; 
        else
        l=mid+1;
    }
    return -1;
}
int main()
{
    int r,c=1000;
    scanf("%d",&r);
    fflush(stdin);
    char s[r][c];
    for(int i=0;i<r;i++)
    {
        scanf("%[^\n]",s[i]);
        fflush(stdin);
    }
    char key[c];
    printf("Enter the search element: ");
    scanf("%[^\n]",key);
    if(search(r,c,s,key)>=0)
    printf("Found at index %d",search(r,c,s,key));
    else
    printf("Not Found");
}