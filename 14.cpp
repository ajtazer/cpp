#include<iostream>
using namespace std;
int main()
{
int num,i;
cout<<"Enter the number :"<<endl;
cin>>num;
for(i=2;i<=num/2;++i)
if(num%i==0)
{
cout<<"Not a prime number !!!";
exit(-1);
}
cout<<"It is a prime number.";
return 0;
}
