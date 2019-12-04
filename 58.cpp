#include<iostream>
using namespace std;
void sqlarge(int &a,int &b)
{
    (a>b)?(a=a*a):(b=b*b);
}
int sum(int c,int s)
{
    s=0;
    while(c>0)
    {
        s=s+(c%10);
        c=c/10;
    }
    return s;
}
int main()
{
    int s;
    int a,b,c;
    cout<<"Enter two integers : \n";
    cin>>a>>b;
    cout<<"Enter the integer for digit sum : \n";
    cin>>c;
    sqlarge(a,b);
    cout<<"Value of a & b : "<<a<<" & "<<b;
    cout<<"\nSum of the digits in an integer : "<<sum(c,s);
    return 0;
}
