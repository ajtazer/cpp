#include<iostream>
#include<math.h>
using namespace std;
int power(int m,int n)
{
    int result;
    result=pow(m,n);
    return result;
}
int main()
{
        int m,n;
        cout<<"Enter the number : \n";
        cin>>m;
        cout<<"Enter its power : \n";
        cin>>n;
        cout<<"Answer : "<<power(m,n);
        return 0;
}
