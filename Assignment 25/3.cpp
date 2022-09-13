#include<iostream>
using namespace std;
class Factorial
{
    private:
    int n,f;
    public:
    void setn(int nn)
    {
        n=nn;
        f=1;
    }
    void fact()
    {
        for(int i=1;i<=n;i++)
        f=f*i;
    }
    int getfact()
    {
        return f;
    }
};
int main()
{
    int n;
    cin>>n;
    Factorial ob;
    ob.setn(n);
    ob.fact();
    cout<<ob.getfact();
}