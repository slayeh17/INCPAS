#include<stdio.h>
int main()
{
    int a;
  do
  {
    printf("\nEnter:\n1 to add\n2 to subtract\n3 to multiply\n4 to divide\n5 to exit\n-> ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            printf("Enter two numbers: ");
            int x,y;
            scanf("%d%d",&x,&y);
            printf("Sum: %d",x+y);
            break;
        }
        case 2:
        {
            printf("Enter two numbers: ");
            int x,y;
            scanf("%d%d",&x,&y);
            printf("Difference: %d",x-y);
            break;
        }
        case 3:
        {
            printf("Enter two numbers: ");
            int x,y;
            scanf("%d%d",&x,&y);
            printf("Product: %d",x*y);
            break;
        }
        case 4:
        {
            printf("Enter two numbers: ");
            int x,y;
            scanf("%d%d",&x,&y);
            printf("Division: %d",x/y);
            break;
        }
        case 5:break;
        default:printf("Wrong Input");
    }
  }while(a!=5);
  return 0;
}