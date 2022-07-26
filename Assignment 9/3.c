#include<stdio.h>
int main()
{
    int n;
    printf("Enter the day number of the week: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Hello, today is Monday") ;break;
        case 2:printf("Hello, today is Tuesday") ;break;
        case 3:printf("Hello, today is Wednesday") ;break;
        case 4:printf("Hello, today is Thursday") ;break;  
        case 5:printf("Hello, today is Friday") ;break;
        case 6:printf("Hello, today is Saturday") ;break;
        case 7:printf("Hello, today is Sunday") ;break;
        default:printf("INVALID INPUT");
    }
    return 0;
}