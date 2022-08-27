#include<iostream>
using namespace std;
int main()
{
    int n=10,s=0;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s=s+arr[i];
    }
    cout<<"Sum: "<<s;
    return 0;
}