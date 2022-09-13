#include<iostream>
using namespace std;
class Circle
{
    private:
    int r;
    float area;
    public:
    void setr(int rr)
    {
        r=rr;
    }
    void findArea()
    {
        area=(22.0/7.0)*r*r;
    }
    float getArea()
    {
        return area;
    }
};
int main()
{
    int r;
    cin>>r;
    Circle ob;
    ob.setr(r);
    ob.findArea();
    cout<<ob.getArea();
}