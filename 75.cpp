#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,sum=0;
        cin>>c>>n;
        for(int i=0;i<n;i++)
        {
            int req;
            cin>>req;
            sum+=req;
        }
        if(c>=sum)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}