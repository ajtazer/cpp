#include<iostream>
using namespace std;
int diagnal_sum(int mat[3][3])
{
    int sum=0;
    for (int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            if(i==j)
                sum+=mat[i][j];
            if(i==2-j)
                sum+=mat[i][j];
        }
    return sum;
}
int main()
{
    int mat[3][3];
    cout<<"Enter the elements : \n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>mat[i][j];
    cout<<"Sum of diagonals : "<<diagnal_sum(mat);
    return 0;
}