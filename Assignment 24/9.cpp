#include<iostream>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
float max(float a,float b)
{
    return a>b?a:b;
}
int main()
{
    int a,b;
    float c,d;
    cin>>a>>b;
    cout<<"Max is: "<<max(a,b)<<endl;
    cin>>c>>d;
    cout<<"Max is: "<<max(c,d)<<endl;
}