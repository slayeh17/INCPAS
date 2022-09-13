#include<iostream>
using namespace std;
class LargestNumber
{
    private:
    int a,b,c,largest;
    public:
    void seta(int sa)
    {
        a=sa;
    }
    void setb(int sb)
    {
        b=sb;
    }
    void setc(int sc)
    {
        c=sc;
    }
    void findLargest()
    {
        if(a>b && a>c)
        largest=a;
        else if(b>a && b>c)
        largest=b;
        else
        largest=c;
    }
    int getLargest()
    {
        return largest;
    }
};
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    LargestNumber ob;
    ob.seta(a);
    ob.setb(b);
    ob.setc(c);
    ob.findLargest();
    cout<<ob.getLargest();
}