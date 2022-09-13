#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void set(int r,int i)
        {
            real=r;
            img=i;
        }
        void display()
        {
            if(img<0)
            cout<<real<<"-"<<(-1)*img<<"i";
            else
            cout<<real<<"+"<<img<<"i";
        }
};
int main()
{
    int real,img;
    cout<<"Enter the real and imaginary parts: ";
    cin>>real>>img;
    Complex obj;
    obj.set(real,img);
    obj.display();
}