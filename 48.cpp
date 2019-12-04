#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[25],str2[25],str3[25];
    cout<<"Enter three strings : \n";
    cin.getline(str1,25);
    cin.getline(str2,25);
    cin.getline(str3,25);
    int x=strlen(str1);
    int y=strlen(str2);
    int z=strlen(str3);
    cout<<"\n Longest string : ";
    if(x>y&&x>z)
        cout.write(str1,x);
    else if(y>x&&y>z)
        cout.write(str2,y);
    else
        cout.write(str3,z);

    cout<<"\n Smallest string : ";
    if(x<y&&x<z)
        cout.write(str1,x);
    else if(y<x&&y<z)
        cout.write(str2,y);
    else
        cout.write(str3,z);
return 0;
}
