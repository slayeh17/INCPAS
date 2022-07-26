#include<stdio.h>
int main()
{
    int unit;
    double amt;
    printf("Enter the unit: ");
    scanf("%d",&unit);
    switch(unit<=50)
    {
        case 1:amt=unit*0.5;break;
        case 0:
        {
            switch(unit<=150)
            {
                case 1:amt=25+(unit-50)*0.75;break;
                case 0:
                {
                    switch(unit<=250)
                    {
                        case 1:amt=25+75+(unit-150)*1.20;break;
                        case 0:amt=25+75+120+(unit-250)*1.50;break;
                    }
                }
            }
        }
    }
    double total=amt+amt*0.2;
    printf("Bill: %lf",total);
    return 0;
}