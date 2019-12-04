#include<iostream>
using namespace std;
int main()
{
char ch;
int num,i;
do
{
    cout<<"Enter a number :"<<endl;
    cin>>num;
    if(num%2==0)
        cout<<"Its an even number."<<endl;
    else
    cout<<"Its an odd number."<<endl;
    if(num==1)
    cout<<"Prime number."<<endl;
        else
        {
        for(i=2;i<=num/2;i++)
        if(num%i==0)
        {
        cout<<"Not  a prime number"<<endl;
        goto lb;
        }
    cout<<"Its a prime number"<<endl;
    }
    lb:
    cout<<"Want to continue[Y/N]?"<<endl;
    cin>>ch;
}while(ch=='y'||ch=='Y');
return 0;
}
