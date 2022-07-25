#include<stdio.h>
double area(double r)
{
    return 3.14*r*r;
}
int main()
{
    double r;
    printf("Radius: ");
    scanf("%lf",&r);
    printf("Area: %lf",area(r));
    return 0;
}