#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[3][3];
    cout<<"\nEnter the matrix : ";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>mat[i][j];
    cout<<"\nYour Entered matrix : \n";
    for(int i=0;i<3;i++,cout<<"\n")
        for(int j=0;j<3;j++)
            cout<<mat[i][j]<<"\t";
    cout<<"\nLower Triange of the matrix : \n";
    for(int i=0;i<3;i++,cout<<"\n")
        for(int j=0;j<3;j++)
        {
            if(i>j)
                cout<<mat[i][j];
            else
                cout<<" ";
            cout<<"\t";
        }
    cout<<"\nUpper Triangle of the matrix : \n";
     for(int i=0;i<3;i++,cout<<"\n")
        for(int j=0;j<3;j++)
        {
            if(i<j)
                cout<<mat[i][j];
            else
                cout<<" ";
            cout<<"\t";
        }
    return 0;
}