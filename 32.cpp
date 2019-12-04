#include<iostream>
using namespace std;
int main()
{
void change(int);
int orig=10;
cout<<"The orignal value is "<<orig<<endl;
cout<<"Return value of function change() is "<<change(orig)<<endl;
cout<<"The value of function change() is over "<<orig<<endl;
return 0;
}
void change(int a)
{
    a=20;
    return a;
}
