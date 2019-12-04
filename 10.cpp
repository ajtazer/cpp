#include<iostream>
using namespace std;
int main()
{
float rad,res,choice;
cout<<"Enter the radius :"<<endl;
cin>>rad;
cout<<"Enter your choice (1:area)or(2:perimeter) :"<<endl;
cin>>choice;
res=choice==1?(22*rad*rad)/7:(22*2*rad)/7;
cout<<"Result :"<<res;
return 0;
}
