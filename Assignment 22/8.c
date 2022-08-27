//A dangling pointer is pointer which points to nothing
//for example
#include<stdio.h>
int main()
{
    int *p=(int*)malloc(sizeof(int));
    //currently p is pointing to some address
    free(p);
    //now since the allocated memory in p is freed
    //p is pointing to nothing hence a dangling pointer
}