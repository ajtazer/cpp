#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0,j=0;
    char str1[80],str2[80];
    cout<<"Enter both the string : "<<endl;
    cin.getline(str1,80);
    cin.getline(str2,80);
    i=strlen(str1);
    j=strlen(str2);
    if(i>j)
        cout<<"i= "<<i<<" & j="<<j<<". Therefore, i is greater than j.";
    else if(j>i)
        cout<<"i= "<<i<<" & j="<<j<<". Therefore, j is greater than i.";
    else
        cout<<"i= "<<i<<" & j="<<j<<". Therefore, both i & j are equal.";
        return 0;
}
