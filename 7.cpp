#include<iostream>
using namespace std;
int main()
{
int si,t,pa,r;
cout<<"Enter the principal Amount :"<<endl;
cin>>pa;
cout<<"Enter the time in years :"<<endl;
cin>>t;
si=t>10?8:12;
r=(pa*si/100)*t;
cout<<"Your Simple Interest will be "<<r;
return 0;
}
