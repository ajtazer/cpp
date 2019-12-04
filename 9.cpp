#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,i;
cout<<"Enter the number :"<<endl;
cin>>n;
if(n%2!=0)
i=sqrt(n);
else
i=pow(n,5);
cout<<"Answer :"<<i;
return 0;
}
