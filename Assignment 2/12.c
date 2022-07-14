#include<stdio.h>
int main()
{
    double a;
    printf("Enter the amount in INR: ");
    scanf("%lf",&a);
    printf("The amount in USD is %lf",a/76.23);
    return 0;
}