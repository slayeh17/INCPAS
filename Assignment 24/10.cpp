#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
float add(float a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    float c,d;
    cin>>a>>b;
    cout<<"Sum of int and int: "<<add(a,b)<<endl;
    
    cin>>c>>d;
    cout<<"Sum of float and float: "<<add(c,d)<<endl;
    
    cin>>c>>b;
    cout<<"Sum of float and int: "<<add(c,b)<<endl;
}