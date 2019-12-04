#include<iostream>
using namespace std;
int main()
{
    void swap(int,int);
    int a=1,b=9;
    cout<<"Original values are :"<<endl;
    cout<<"a = "<<a<<" & b = "<<b<<endl;
    swap(a,b);
    cout<<"The values of a & b after swaping :"<<endl;
    cout<<"a = "<<a<<" & b = "<<b<<endl;
    return 0;
}
    void swap(int x,int y)
    {
        int temp;
        temp=y;
        y=x;
        x=temp;
        cout<<"Swapped values of x and y :"<<endl;
        cout<<"x = "<<x<<" & y = "<<y<<endl;
    }
