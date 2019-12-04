#include<iostream>
using namespace std;
int main()
{
int num,sum_neg,sum_even,sum_odd;
sum_neg=sum_even=sum_odd=0;
do
{
cout<<"Enter the no."<<endl;
cin>>num;
if(num<0)
sum_neg+=num;
else if(num%2==0)
sum_even+=num;
else
sum_odd+=num;
}while(num!=0);
cout<<"Sum of negative no. :"<<sum_neg<<endl;
cout<<"Sum of even no. :"<<sum_even<<endl;
cout<<"Sum of odd no. :"<<sum_odd;
return 0;
}
