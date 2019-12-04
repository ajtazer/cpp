#include<iostream>
using namespace std;
int main()
{
    const int size=50;
    float marks[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter marks of the student "<<i+1<<" : ";
        cin>>marks[i];
        cout<<"\n";
    }
    for(int i=0;i<size;i++)
        cout<<"Marks of student "<<i+1<<" : "<<marks[i]<<"\n";
        return 0;
    }
