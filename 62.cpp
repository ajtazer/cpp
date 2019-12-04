#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[3][30],ch;
    int i,j,k,len;
    cout<<"Enter your 3 string : \n";
    for(i=0;i<3;i++)
        cin.getline(string[i],30);
    cout<<"Your entered string : \n";
    for(i=0;i<3;i++)
        cout<<string[i]<<"\n";
    cout<<"Reversed string : \n";
    for(i=0;i<3;i++)
    {
        len = strlen(string[i]);
        for(j=0,k=len-1;j<len/2;j++,k--)
        {
            ch=string[i][j];
            string[i][j]=string[i][k];
            string[i][k]=ch;
        }
    }
    for(i=0;i<3;i++)
        cout<<string[i]<<"\n";
    return 0;
}
