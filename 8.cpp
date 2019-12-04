#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int i,q;
cout<<"Enter the number :"<<endl;
cin>>i;
q=(i%2==0)?pow(i,2):pow(i,3);
cout<<"Answer :"<<q;
return 0;
}
