#include<bits/stdc++.h>
using namespace std;
float amount(float princ,int time=2,float rate=0.08);
float amount(float princ,int time,float rate)
{
    cout<<"\nPrincipal Amount : "<<princ;
    cout<<"| Time : "<<time;
    cout<<" | Rate : "<<rate;
    cout<<"|| Interest Amount : "<<(princ*time*rate)<<"\n";
    return 0;
}
int main()
{
    system("cls");
    cout<<"Case 1"<<amount(2000);
    cout<<"Case 2"<<amount(2500,3);
    cout<<"Case 3"<<amount(2300,3,0.11);
    cout<<"Case 4"<<amount(2500,1.12);
    return 0;
}
