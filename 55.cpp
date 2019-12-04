#include<iostream>
using namespace std;
int satis(int a,int b,int c,int d)
{
    if((a*a*a+b*b*b+c*c*c)==(d*d*d))
        return 0;
    else
        return -1;
}
int main()
{
    int a,b,c,d;
    cout<<"Enter 4 integers : \n";
    cin>>a>>b>>c>>d;
    cout<<satis(a,b,c,d);
    return 0;
}
