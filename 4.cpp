#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double result,y;
cout<<"Enter the value for y :"<<endl;
cin>>y;
result=2-y*exp(2*y)+pow(4,y);
cout<<"Answer ="<<result;
return 0;
}
