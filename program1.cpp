#include<ioostream>
#include<conio.h>
void main()
{
    clrscr();
    int arr[3][3],i,j,arrt[3][3];
    cout<<"Enter 3*3 array Elements : ";
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            cin>>arr[i][j];
    cout<<"Transposing Array....\n";
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        arrt[i][j]=arr[j][i];
    cout<<"Transpose of the matrix is \n";
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                cout<<arrt[i][j]<<"\n";
    getch();
}