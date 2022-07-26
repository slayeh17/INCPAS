#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    int a=(year%400==0) || (year%4==0 && year%100!=0);
    switch(a)
    {
        case 1:printf("%d is a leap year.",year);break;
        case 0:printf("%d is not a leap year.",year);break;
    }
    return 0;
}