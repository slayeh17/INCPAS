#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int size;
    printf("Enter the size in bytes: ");
    scanf("%d",&size);
    int *p=(int*)malloc(size);
    if(p==NULL)
    printf("Memory allocation failed");
    else
    printf("Memory allocation successful");
    free(p);
    return 0;
}