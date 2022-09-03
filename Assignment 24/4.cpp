#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
    return 1;
    return n*fact(n-1);
}
int C(int n,int r)
{
    int a=fact(n),b=(fact(r)*fact(n-r));
    return a/b;
}
void pascal_triangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int s=n-1;s>i;s--)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<C(i,j)<<" ";   
        cout<<endl;     
    }
}
int main()
{
    int n;
    cin>>n;
    pascal_triangle(n);
}