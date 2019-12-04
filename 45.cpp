#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[25],str2[25];
    cout<<"Enter the first string : \n";
    cin.getline(str1,25);
    cout<<"Enter the second string : \n";
    cin.getline(str2,25);
    strcat(str2,str1);
    int x=strlen(str2);
    cout.write(str2,x);
    return 0;
}
