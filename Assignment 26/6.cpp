#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name,cl,sec;
    public:
    student(string n,int r,string c,string s)
    {
        roll=r;
        name=n;
        cl=c;
        sec=s;
    }
    void display()
    {
        cout<<"Name: "<<name<<" Roll No.: "<<roll<<" Class: "<<cl<<" Section: "<<sec;
    }
};
int main()
{
    int roll;
    string name,cl,sec;
    cin>>roll>>name>>cl>>sec;
    student ss(name,roll,cl,sec);
    ss.display();
}