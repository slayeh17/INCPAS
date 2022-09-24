#include<iostream>
using namespace std;
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int a,int b,int c)
    {
        h=a,m=b,s=c;
    }
    void showTime()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void normalize()
    {
        int cs=0,cm=0;
        while(s>=60)
        {
            s-=60;
            cs++;
        }
        m+=cs;
        while(m>=60)
        {
            m-=60;
            cm++;
        }
        h+=cm;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        temp.normalize();
        return temp;
    }
};
int main()
{
    int a,b,c;
    Time t1,t2,t3;
    cin>>a>>b>>c;
    t1.setTime(a,b,c);
    t1.normalize();
    t1.showTime();
    cin>>a>>b>>c;
    t2.setTime(a,b,c);
    t2.normalize();
    t2.showTime();
    t3=t1.add(t2);
    cout<<"Sum: ";
    t3.showTime();
}