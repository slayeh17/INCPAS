#include<stdio.h>
#include<math.h>
int main()
{
    int n=1;
    while(n<=1000)
    {
        int x=n,c=0,a=n;
        double s=0;
        while(x>0)
        {
            x=x/10;
            c++;
        }
        while(a>0)
        {
            int d=a%10;
            s=s+pow(d,c);
            a=a/10;
        }
        if(s==n)
        printf("%d ",n);
        n++;   //
    }
    return 0;
}