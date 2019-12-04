#include<iostream>
using namespace std;
int main()
{
    int v[50],large,small;
    int i,n,l,s;
    cout<<"Enter the no. of elements : \n";
    cin>>n;
    cout<<"Enter the elements : \n";
    for(i=0;i<n;i++)
        cin>>v[i];
    large=v[0];
    small=v[0];
    for(i=0;i<n;i++)
    {
        if(v[i]>large)
            {
                large=v[i];
                l=i+1;
            }
        else if(v[i]<small)
            {
                small=v[i];
                s=i+1;
            }
    }
    cout<<"\nLargest element : "<<large<<" at position : "<<l;
    cout<<"\nSmall element : "<<small<<" at position : "<<s;
    return 0;
}
