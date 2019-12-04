#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool f;
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,K,N;
        cin>>N>>K>>Y>>X;
        f=false;
        int P,C;
        for(int i=0;i<N;i++)
        {
            cin >>C>>P;
            if(P>=X-Y&&K>=C)
                f=true;
        }
        cout<<(f?"LuckyChef":"UnluckyChef")<<endl;
    }
    return 0;
}