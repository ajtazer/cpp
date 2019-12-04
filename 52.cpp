#include<iostream>
using namespace std;
void divisor(int a,int b,int &i)
{
    for(;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
            {
                cout<<"Smallest common divisor : "<<i;
                return;
            }
    }
    cout<<"No factor except 1.";
}
int main()
{
    int a,b,i=2;
    cout<<"Enter two numbers : \n";
    cin>>a>>b;
    divisor(a,b,i);
    return 0;
}
