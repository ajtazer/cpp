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
    if(strlen(str1)>strlen(str2))
        {
            strcpy(str1,str2);
            int x=strlen(str1);
            cout.write(str1,x);
        }
    else if(strlen(str1)<strlen(str2))
        {
            strcpy(str2,str1);
            int x=strlen(str2);
            cout.write(str2,x);
        }
    return 0;
}
