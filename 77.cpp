#include<bits/stdc++.h>
using namespace std;
void amount(float princ,int time,float rate)
{
    cout<<"\nPrincipal Amount : "<<princ;
    cout<<"\tTime : "<<time<<" years";
    cout<<"\tRate : "<<rate;
    cout<<"\nInterest Amount : "<<(princ*time*rate)<<"\n";
}
void amount(float princ,int time)
{
    cout<<"\nPrincipal Amount : "<<princ;
    cout<<"\tTime : "<<time<<" years";
    cout<<"\tRate : 0.08";
    cout<<"\nInterest Amount : "<<(princ*time*0.08)<<"\n";
}
void amount(int time,float rate)
{
    cout<<"\nPrincipal Amount : 2000";
    cout<<"\tTime : "<<time<<" years";
    cout<<"\tRate : "<<rate;
    cout<<"\nInterest Amount : "<<(2000*time*rate)<<"\n";
}
void amount(float princ)
{
    cout<<"\nPrincipal Amount : "<<princ;
    cout<<"\tTime : 2 years";
    cout<<"\tRate : 0.08";
    cout<<"\nInterest Amount : "<<(princ*2*0.08)<<"\n";
}
int main()
{
    system("cls");
    cout<<"Case 1";
    amount(2000.0);
    cout<<"Case 2";
    amount(2500.0,3);
    cout<<"Case 3";
    amount(2300.0,3,0.11);
    cout<<"Case 4";
    amount(2,0.12);
    cout<<"Case 5";
    amount(6,0.07);
    return 0;
}