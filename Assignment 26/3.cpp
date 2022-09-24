#include<iostream>
using namespace std;
class Cube
{
    private:
    int s,vl;
    public:
    Cube(int a)
    {
        s=a;
    }
    void findVolume()
    {
        vl=s*s*s;
    }
    int getVolume()
    {
        return vl;
    }
};
int main()
{
    int a;
    cin>>a;
    Cube ob(a);
    ob.findVolume();
    cout<<"Volume: "<<ob.getVolume();
}