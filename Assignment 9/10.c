#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the coefficients: ");
    scanf("%d%d%d",&a,&b,&c);
    int d=(b*b)-(4*a*c);
    int d1=(4*a*c)-(b*b);
    switch(d>0)
    {
        case 1:
        {
            printf("Root 1: %.2lf\n",((-b)+sqrt(d))/2*a*1.0);
            printf("Root 2: %.2lf",((-b)-sqrt(d))/2*a*1.0);
            break;
        }
        case 0:
        {
            switch(d<0)
            {
                case 1:
                {
                    printf("Root 1: %.2lf+%.2lfi\n",(-b/2*a*1.0),sqrt(d1)/(2*a*1.0));
                    printf("Root 2: %.2lf-%.2lfi",(-b/2*a*1.0),sqrt(d1)/(2*a*1.0));
                    break;
                }
                case 0:
                {
                    switch(d==0)
                    {
                        case 1:
                        {
                            printf("Both roots are same: %.2lf",(-b/2*a*1.0));
                            break;  
                        }
                    }
                }
            }
        }
    }
    return 0;
}