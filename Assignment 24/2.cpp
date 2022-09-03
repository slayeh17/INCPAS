#include<iostream>
using namespace std;
int highest_value_digit(int n)
{
    int a,max=0;
    a=n;
    if(n<0)
    a=-n;
    while(a>0)
    {
        int d=a%10;
        if(max<d)
        max=d;
        a=a/10;
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    cout<<highest_value_digit(n);
}