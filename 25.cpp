#include<iostream>
using namespace std;
int main()
{
void calc(int,int,char);
int a,b;
char ch;
cout<<"Enter two numbers :"<<endl;
cin>>a>>b;
cout<<"Enter an arthematic operator :"<<endl;
cin>>ch;
}
void calc(int x,int y,char c)
{
switch(c)
    {
    case'+': cout<<"Sum of "<<x<<"& "<<y<<"is"<<(x+y);
    break;
    case'-': cout<<"Difference of "<<x<<"& "<<y<<"is"<<(x-y);
    break;
    case'*': cout<<"Multiply of "<<x<<"& "<<y<<"is"<<(x*y);
    break;
    default: cout<<"Wrong operator";
             break;
    }
return;
}
