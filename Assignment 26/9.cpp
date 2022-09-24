#include<iostream>
using namespace std;
class Bill
{
    private:
    int unit;
    float price;
    public:
    Bill(int u)
    {
        unit=u;
    }
    void calculateBill()
    {
        if(unit<=100)
        price=unit*1.2;
        else if(unit>100 && unit<=200)
        price=unit*2;
        else if(unit>200)
        price=unit*3;
    }
    float get()
    {
        return price;
    }
};
int main()
{
    int unit;
    cout<<"Enter Units: ";cin>>unit;
    Bill b(unit);
    b.calculateBill();
    cout<<"Bill: "<<b.get();
}