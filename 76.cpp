#include<bits/stdc++.h>
using namespace std;
void amount(float princ,int time=2,float rate=0.08);
void amount(float princ,int time,float rate)
{
    cout<<"\nPrincipal Amount : "<<princ;
    cout<<"\nTime : "<<time;
    cout<<" \nrRate : "<<rate;
    cout<<"\tInterest Amount : "<<(princ*time*rate)<<"\n";
}
int main()
{
    system("cls");
    cout<<"Case 1";
    amount(2000);
    cout<<"Case 2";
    amount(2500,3);
    cout<<"Case 3";
    amount(2300,3,0.11);
    cout<<"Case 4";
    amount(2500,1.12);
    return 0;
}
