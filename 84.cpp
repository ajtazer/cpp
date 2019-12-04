#include<bits/stdc++.h>
using namespace std;
int a=10;
int main()
{
    int a=15;
    cout<<"In Main\n";
    cout<<"a = "<<a<<"\n";
    cout<<"::a = "<<::a<<"\n";
    {
        int a=25;
        cout<<"Inner Block\n";
        cout<<"a = "<<a<<"\n";
        cout<<"::a = "<<::a<<"\n";
    }
    cout<<"Again In Main\n";
    cout<<"a = "<<a<<"\n";
    cout<<"::a = "<<::a<<"\n";
    return 0;
}