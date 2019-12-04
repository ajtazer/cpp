#include<iostream>
using namespace std;
int main()
{
    int x[50][50];
    cout<<"Enter the matrix's elements : \n";
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>x[i][j];
    cout<<"\nOriginal matrix : \n";
    for(int i=0;i<5;i++)
    {
        cout<<"\n";
        for(int j=0;j<5;j++)
            cout<<x[i][j]<<"\t";
    }
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            if(i==j || (i==(4-j)))
                x[i][j]=x[i][j]*x[i][j];
        }
    cout<<"\nMatrix after squaring the diagonals : \n";
    for(int i=0;i<5;i++)
    {
        cout<<"\n";
        for(int j=0;j<5;j++)
            cout<<x[i][j]<<"\t";
    }
}
