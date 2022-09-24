#include<iostream>
using namespace std;
class Blank
{
    private:
    int principal,year;
    float rate,SI;
    public:
    Blank(int p,int y,float r)
    {
        principal=p;
        year=y;
        rate=r;
    }
    void calcSI()
    {
        SI=principal*rate*year;
    }
    float getSI()
    {
        return SI;
    }
};
int main()
{
    int p,y;
    float r;
    cin>>p>>y>>r;
    Blank s(p,y,r);
    s.calcSI();
    cout<<s.getSI();
}