#include<iostream>
using namespace std;
int fib(int x)
{
    int a=0,b=1,c;
    for(int i=2;;i++)
    {
        c=a+b;
        if(c==x)
        return 1;
        if(c>x)
        return 0;
        a=b;
        b=c;
    }
    return 0;
}
int main()
{
    int x;
    cin>>x;
    if(fib(x))
    cout<<"Found";
    else
    cout<<"Not Found";
}