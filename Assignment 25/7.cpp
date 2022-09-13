#include<iostream>
using namespace std;
class largestnum
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
class Greatest
{
    private:
    int l1,l2,l3,greatest;
    public:
    void setl1(int l)
    {
        l1=l;
    }
    void setl2(int l)
    {
        l2=l;
    }
    void setl3(int l)
    {
        l3=l;
    }
    void findGreatest()
    {
        if(l1>l2 && l1>l3)
        greatest=l1;
        else if(l2>l1 && l2>l3)
        greatest=l2;
        else
        greatest=l3;
    }
    int getGreatest()
    {
        return greatest;
    }
};
int main()
{
    largestnum ob1,ob2,ob3;
    int a,b,c;
    cout<<"Enter for ob1: ";
    cin>>a>>b>>c;
    ob1.seta(a);ob1.setb(b);ob1.setc(c);
    ob1.findLargest();
    cout<<"Enter for ob2: ";
    cin>>a>>b>>c;
    ob2.seta(a);ob2.setb(b);ob2.setc(c);
    ob2.findLargest();
    cout<<"Enter for ob3: ";
    cin>>a>>b>>c;
    ob3.seta(a);ob3.setb(b);ob3.setc(c);
    ob3.findLargest();
    Greatest ob;
    ob.setl1(ob1.getLargest());
    ob.setl2(ob2.getLargest());
    ob.setl3(ob3.getLargest());
    ob.findGreatest();
    cout<<ob.getGreatest();
}