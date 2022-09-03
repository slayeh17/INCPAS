#include<iostream>
using namespace std;
float area(float r)
{
    return 3.14*r*r;
}
float area(int l,int b)
{
    return l*b;
}
float area(float b,float h)
{
    return 0.5*b*h;
}
int main()
{
    float a,d;int b,c;
    cout<<"Enter the radius of the circle: ";
    cin>>a;
    cout<<area(a)<<endl;
    cout<<"Enter the lenght and breadth of the rectangle: ";
    cin>>c>>b;
    cout<<area(c,b)<<endl;
    cout<<"Enter the base and height of the triangle: ";
    cin>>a>>d;
    cout<<area(a,d)<<endl;
}