#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rev=0,i,n,q;
    cout<<"Enter the no. : \n";
    cin>>n;
    for(n;n>0;n=n/10)
    {
        i=n%10;
        rev+=i;
        rev=rev*10;
    }
    q=rev/10;
    cout<<"Reverse : "<<q;
    return 0;    
}