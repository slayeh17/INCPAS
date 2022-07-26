#include<stdio.h>
int main()
{
    int d;
    do
    {
        int a,b,c;
        printf("Enter the valid sides of the triangle: \n");
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c && b+c>a && a+c>b)
        {
            printf("Enter:\n1 for checking isosceles triangle\n2 for checking right angled triangle\n3 for checking equilateral triangle\n4 to exit\n->");
            scanf("%d",&d);
            switch(d)
            {
                case 1:
                {
                    if(a==b || b==c || c==a)
                    printf("\nThe triangle is Isosceles\n");
                    else
                    printf("\nThe triangle is Not Isosceles\n");
                    break;
                }
                case 2:
                {
                    if(b*b==a*a+c*c || a*a==b*b+c*c || c*c==a*a+b*b)
                    printf("\nThe triangle is Right Angled\n");
                    else
                    printf("\nThe triangle is Not Right Angled\n");
                    break;
                }
                case 3:
                {
                    if(a==b && b==c)
                    printf("\nThe triangle is Equilateral\n");
                    else
                    printf("\nThe triangle is Not Equilateral\n");
                    break;
                }
            }
        }
        else
        printf("\nInvalid sides!\n");
    } while (d!=4);
    
    return 0;
}