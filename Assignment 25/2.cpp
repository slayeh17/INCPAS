#include<iostream>
using namespace std;
class Time
{
    private:
    int hour,min,sec;
    public:
    void set(int h,int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    void display()
    {
        cout<<hour<<" hr "<<min<<" min "<<sec<<" sec ";
    }
};
int main()
{
    int h,m,s;
    cout<<"Enter the hour, minutes and seconds: ";
    cin>>h>>m>>s;
    Time o;
    o.set(h,m,s);
    o.display();
}