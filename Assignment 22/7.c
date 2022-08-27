#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *mem=(int*)malloc(sizeof(int));
    printf("Memory leak demo --> if the allocated memory is not released it is called a memory leak");
    printf("\nTo avoid that use free()");
    free(mem); //If this line is not written after the use of mem then it is known as
               //memory leak
    return 0;
}