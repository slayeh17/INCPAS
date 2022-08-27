#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *n=(int*)malloc(sizeof(int));
    printf("Enter the size of the array: ");
    scanf("%d",n);
    int *arr=(int*)malloc((*n)*sizeof(int));
    printf("Enter the elements: \n");
    for(int i=0;i<*n;i++)
    scanf("%d",(arr+i));
    int min=arr[0],max=arr[0];
    for(int i=0;i<*n;i++)
    {
        if(min>arr[i])
        min=arr[i];
        if(max<arr[i])
        max=arr[i];
    }
    printf("Minimum: %d\nMaximum: %d",min,max);
    free(arr);
    free(n);
    return 0;
}