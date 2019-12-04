#include<iostream>
using namespace std;
void zero(int &a,int &b)
{
    if(a<b)
    a=0;
    else if(a>b)
    b=0;
    else
    cout<<"error";
}
int main()
{
    int x,y;
    cout<<"Enter the two numbers : "<<endl;
    cin>>x>>y;
    zero(x,y);
    cout<<"x="<<x<<",y="<<y;
    return 0;
}
