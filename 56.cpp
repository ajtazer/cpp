#include<iostream>
using namespace std;
void smallo(int &a,int &b)
{
    (a>b)?(b=0):(a=0);
}
int main()
{
    int a,b;
    cout<<"Enter 2 integers : \n";
    cin>>a>>b;
    smallo(a,b);
    cout<<"value of a : "<<a;
    cout<<"\nvalue of b : "<<b;
    return 0;
}
