#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    float s=0;
    printf("Enter the number of data: ");
    scanf("%d",&n);
    float *arr=(float*)malloc(n*sizeof(float));
    printf("Enter the data: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        s=s+arr[i];
    }
    printf("Sum: %f\n",s);
    for(int i=0;i<n;i++)
    printf("%f ",*(arr+i));
    free(arr);
    return 0;
}