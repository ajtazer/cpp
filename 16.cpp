#include<iostream>
using namespace std;
int main()
{
int num,rev=0,i,n,d;
cout<<"Enter the integer : "<<endl;
cin>>num;
d=num;
do
{
n=num%10;
rev=(rev*10)+n;
num=num/10;
}while(num!=0);
cout<<"The Reverse of "<<n<<" is "<<rev<<endl;
if(d
==rev)
cout<<"The given no. is a palindrome";
else
cout<<"The given no. is not a palindrome";
return 0;
}
