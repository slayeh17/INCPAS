#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
    int n,rev=0;
    public:
    void setn(int nn)
    {
        n=nn;
    }
    void reverse()
    {
        int a=n;
        while(a>0)
        {
            int d=a%10;
            rev=rev*10+d;
            a=a/10;
        }
    }
    int getrev()
    {
        return rev;
    }
};
int main()
{
    int n;
    cin>>n;
    ReverseNumber ob;
    ob.setn(n);
    ob.reverse();
    cout<<ob.getrev();
}