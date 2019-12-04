#include<iostream>
using namespace std;
int main()
{
int a,b,c,i;
cout<<"Enter three integers :"<<endl;
cin>>a>>b>>c;
if(a>=b&&a>=c)
cout<<"a is the greatest which is "<<a<<endl;
else if(b>=a&&b>=c)
cout<<"b is the greatest which is "<<b<<endl;
else
cout<<"c is the greatest which is "<<c<<endl;
return 0;
}
