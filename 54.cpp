#include<iostream>
using namespace std;
void reverse(float  a[15])
{
    int i=0;
    float temp=0;
    for(;i<7;i++)
    {
        temp=a[i];
        a[i]=a[14-i];
        a[14-i]=temp;
    }
    cout<<"\nreversed array : \n";
    for(i=0;i<15;i++)
    {
        cout<<a[i]<<"\t";
    }
}
int main()
{
    int n=0;
    float a[15];
    cout<<"Enter the 15 elements = \n";
    for(;n<15;n++)
        cin>>a[n];
    cout<<"Your entered array : \n";
    for(n=0;n<15;n++)
        cout<<a[n]<<"\t";
    reverse(a);
    return 0;
}
