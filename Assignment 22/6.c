#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the number of data: ");
    scanf("%d",&n);
    float *arr=(float*)malloc(n*sizeof(float));
    printf("Enter the data: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    float max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    printf("Maximum number: %f",max);
    free(arr);
    return 0;
}