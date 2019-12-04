#include<iostream>
using namespace std;
int main()
{
int change(int);
int orig = 10;
cout<<"The original value is "<<orig<<endl;
cout<<"The Return value of change() is "<<change(orig)<<endl;
cout<<"The value after function change() is over "<<orig<<endl;
return 0;
}
int change(int a)
{
    a=20;
    return a;
}
