#include<iostream>
using namespace std;
class Box
{
    private:
    int len,bre,hei,vol;
    public:
    Box(int l,int b,int h)
    {
        len=l;
        bre=b;
        hei=h;
    }
    void calcVol()
    {
        vol=len*bre*hei;
    }
    int getVol()
    {
        return vol;
    }
};
int main()
{
    int l,b,h;
    cin>>l>>b>>h;
    Box a(l,b,h);
    a.calcVol();
    cout<<a.getVol();
}