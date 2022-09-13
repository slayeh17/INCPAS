#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int l,b,area;
    public:
    void setl(int ll)
    {
        l=ll;
    }
    void setb(int bb)
    {
        b=bb;
    }
    void findArea()
    {
        area=l*b;
    }
    int getArea()
    {
        return area;
    }
};
int main()
{
    int l,b;
    cin>>l>>b;
    Rectangle ob;
    ob.setl(l);ob.setb(b);
    ob.findArea();
    cout<<ob.getArea();
}