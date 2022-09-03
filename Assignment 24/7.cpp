#include<iostream>
using namespace std;
int add(int a=0,int b=0,int c=0)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Sum of 2 numbers: "<<add(a,b)<<endl;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum of 3 numbers: "<<add(a,b,c);
}
