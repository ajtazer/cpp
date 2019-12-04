#include<iostream>
using namespace std;
int main()
{
int grade(int);
    int a,b;
    a=10;
    b=grade(a);
    cout<<b;
    return 0;
}
int grade(int x)
{
    return x*x;
}
