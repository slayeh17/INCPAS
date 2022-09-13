#include<iostream>
using namespace std;
class Area
{
    private:
    int s,l,b,r,sarea,rarea;float carea;
    public:
    void sets(int ss)
    {
        s=ss;
    }
    void setl(int ll)
    {
        l=ll;
    }
    void setb(int bb)
    {
        b=bb;
    }
    void setr(int rr)
    {
        r=rr;
    }
    void findSqArea()
    {
        sarea=s*s;
    }
    void findRecArea()
    {
        rarea=l*b;
    }
    void findCirArea()
    {
        carea=(22.0/7.0)*r*r;
    }
    int getSqArea()
    {
        return sarea;
    }
    int getRecArea()
    {
        return rarea;
    }
    float getCirArea()
    {
        return carea;
    }
};
int main()
{
    Area ob;
    int s,l,b,r;
    cout<<"Enter side of a square: ";
    cin>>s;
    ob.sets(s);
    ob.findSqArea();
    cout<<ob.getSqArea()<<endl;
    cout<<"Enter the length and breadth of a rectangle: ";
    cin>>l>>b;
    ob.setl(l);ob.setb(b);
    ob.findRecArea();
    cout<<ob.getRecArea()<<endl;
    cout<<"Enter the radius of a circle: ";
    cin>>r;
    ob.setr(r);
    ob.findCirArea();
    cout<<ob.getCirArea()<<endl;
}