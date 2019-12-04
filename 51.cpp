#include<iostream>
using namespace std;
void sum(int &s,int &i)
{
    for(i;i>=0;i--)
    {
        s+=i;
    }
    cout<<"sum = "<<s;
}
int main()
{
    int i,s=0;
    cout<<"Enter a number : \n";
    cin>>i;
    sum(s,i);
    return 0;
}
