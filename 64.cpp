#include<iostream>
using namespace std;
int main()
{
    int emp[20],noy=0;
    cout<<"\nEnter the no. of employees who joined in : \n";
    for(int i=0;i<20;i++)
    {
        cout<<"Year "<<i+1<<" : ";
        cin>>emp[i];
        if(emp[i]==0)
            noy++;
    }
    cout<<"In "<<noy<<" Years no. employees joined.\n";
    return 0;
}
