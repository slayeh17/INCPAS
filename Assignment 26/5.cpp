#include<iostream>
using namespace std;
class Date
{
    private:
    int y,m,d;
    public:
    Date(int yy,int mm,int dd)
    {
        y=yy;
        m=mm;
        d=dd;
    }
    void display()
    {
        cout<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    int y,m,d;
    cin>>d>>m>>y;
    Date D(y,m,d);
    D.display();
}