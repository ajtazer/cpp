#include<iostream>
using namespace std;
void Showhundred(int t[4][4])
{
    cout<<"Show Hundred : \n";
    for(int i=0;i<4;i++,cout<<"\n")
        for(int j=0;j<4;j++)
        {
            if(t[i][j]%100==0)
                cout<<t[i][j];
            else            
                cout<<"-";
        cout<<"\t";
        }
}
int main()
{
    int t[4][4];
    cout<<"Enter the elements : \n";
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>t[i][j];
    for(int i=0;i<4;i++,cout<<"\n")
        for(int j=0;j<4;j++)
            cout<<t[i][j]<<"\t";
    Showhundred(t);
    return 0;
}
