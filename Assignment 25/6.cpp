#include<iostream>
using namespace std;
class Square
{
    private:
    int n,sq;
    static int count;
    public:
    void setn(int nn)
    {
        n=nn;
    }
    void findsquare()
    {
        sq=n*n;
        count++;
    }
    int getsq()
    {
        return sq;
    }
    int getcount()
    {
        return count;
    }
};
int Square::count=0;
int main()
{
    int n;
    cin>>n;
    Square ob;
    ob.setn(n);
    ob.findsquare();
    ob.findsquare();
    ob.findsquare();
    cout<<ob.getsq();
    cout<<"\nCount: "<<ob.getcount();
}