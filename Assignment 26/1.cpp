#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setData(int r,int i)
    {
        a=r;
        b=i;
    }
    void showData()
    {
        if(b>=0)
        cout<<a<<"+"<<b<<"i"<<endl;
        else
        cout<<a<<b<<"i"<<endl;
    }
    Complex add(Complex c)
    {
        Complex res;
        res.a=a+c.a;
        res.b=b+c.b;
        return res;
    }
};
int main()
{
    int a,b;
    cin>>a>>b;
    Complex c1,c2,c3;
    c1.setData(a,b);
    c1.showData();
    cin>>a>>b;
    c2.setData(a,b);
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
}