#include<iostream>
using namespace std;
int main()
{
    char str[25],x;
    cout<<"Enter a string : \n";
    cin.getline(str,25);
    for(int i=0;str[i];i++)
    {
        if(islower(str[i]))
            {
                x=toupper(str[i]);
                cout<<x;
            }
        else if(isupper(str[i]))
            {
                x=tolower(str[i]);
                cout<<x;
            }
        }
return 0;
}
