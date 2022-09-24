#include<iostream>
using namespace std;
class StaticCount
{
    private:
    static int count;
    public:
    StaticCount()
    {
        count=0;
    }
    void increment()
    {
        count++;
    }
    void display()
    {
        cout<<count;
    }
};
int StaticCount::count;
int main()
{
    StaticCount c;
    c.increment();
    c.increment();
    c.increment();
    c.display();
}