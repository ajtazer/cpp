#include<bits/stdc++.h>
using namespace std;
struct Addr
{
    int houseno;
    char area[26];
    char city[26];
    char state[26];
};
struct Emp
{
    int empno;
    char name[26];
    char desig[16];
    Addr address;
    float basic;
}worker;
int main()
{
    cout<<"Enter Employee no. : ";
    cin>>worker.empno;
    cout<<"\nEnter the name : ";
    cin>>worker.name;
    cout<<"\nEnter designation : ";
    cin>>worker.desig;
    cout<<"\nEnter address :-\n";
    cout<<"\nEnter House no. : ";
    cin>>worker.address.houseno;
    cout<<"\nEnter Area : ";
    cin>>worker.address.area;
    cout<<"\nEnter City : ";
    cin>>worker.address.city;
    cout<<"\nEnter State : ";
    cin>>worker.address.state;
    cout<<"\nEnter Basic Pay : ";
    cin>>worker.basic;
    return 0;
}