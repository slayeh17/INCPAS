#include<iostream>
using namespace std;
class Counter
{
    private:
    static int count;
    public:
    Counter()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
};
int Counter::count=0;
int main()
{
    Counter c1,c2,c3,c4,c5;
    cout<<c1.getcount();
}