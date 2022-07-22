#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int f=0;
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        printf("%d ",i);
        f=0;
    }
    return 0;
}