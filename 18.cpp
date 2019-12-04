#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter the integer :"<<endl;
    cin>>num;
    cout<<"_____________________________________________\n";
    for(i=1;i<=num/2;++i)
    {
    if(num%i==0)
        cout<<i<<endl;
    }
    return 0;
}
