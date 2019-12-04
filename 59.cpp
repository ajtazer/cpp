#include<iostream>
using namespace std;
void display(int mat[20][20],int m,int n)
{
    int i=0,j=0;
    for(;i<m;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
            cout<<mat[i][j]<<"\t";
    }
}
void times2(int mat[20][20],int m,int n)
{
    int i=0,j=0;
    for(;i<m;i++)
        for(j=0;j<n;j++)
            mat[i][j]=2*mat[i][j];
}
int main()
{
    int mat[20][20];
    int m,n;
    int i=0,j=0;
    cout<<"Enter the no. of rows & columns : \n";
    cin>>m>>n;
    cout<<"Enter the elements : \n";
    for(;i<m;i++)
        for(j=0;j<n;j++)
            cin>>mat[i][j];
    display(mat,m,n);
    times2(mat,m,n);
    cout<<"\n";
    for(i=0;i<m;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
            cout<<mat[i][j]<<"\t";
    }
    return 0;
}
