#include<iostream>
using namespace std;
void lower_half(int mat[3][3])
{   
    cout<<"Lower half of the matrix : \n";
    for(int i=0;i<3;i++,cout<<"\n")
        for(int j=0;j<3;j++)
        {
            if(i>=j)
                cout<<mat[i][j];
            else
                cout<<" ";
            cout<<"\t";
        }
}
int main()
{
    int mat[3][3];
    cout<<"Enter the matrix's elements : \n";
    for (int i = 0; i < 3; i++)
        for(int j=0;j<3;j++)
            cin>>mat[i][j];
    cout<<"Your entered matrix : \n";
    for(int i=0;i<3;i++,cout<<"\n")
        for(int j=0;j<3;j++)
            cout<<mat[i][j]<<"\t";
    lower_half(mat);
    return 0;    
}