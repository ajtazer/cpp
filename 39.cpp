#include<iostream>
using namespace std;
int main()
{
int calc(int,int,char);
int a,b;
char ch;
cout<<"Enter two integers : "<<endl;
cin>>a;
cin>>b;
cout<<"Enter the arithmetic operator(+,-,*,/) : "<<endl;
cin>>ch;
calc(a,b,ch);
return 0;
}
int calc(int x,int y,char c)
{
    switch(c)
    {
        case'+':cout<<"Sum of "<<x<<" & "<<y<<" is "<<x+y;
        break;
        case'-':cout<<"Difference of "<<x<<" & "<<y<<" is "<<x-y;
        break;
        case'*':cout<<"Multiply of "<<x<<" & "<<y<<" is "<<x*y;
        break;
        case'/':if(x<y)
                {
                    cout<<"First integer should be greater than the second.";
                    exit(0);
                }
                else
                {
                cout<<"Quotient : "<<x<<"/"<<y<<" is "<<x/y;
                break;
                }
        default:cout<<"Wrong operator!!!";
        break;
    }
return c;
}
