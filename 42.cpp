#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a;
    cin>>ch;
    a=ch;
    if(isalnum(a))
    {
        cout<<"Alphanumeric character ";
        if(isalpha(a))
        cout<<"& alphabetic character.";
        else if(isdigit(a))
        cout<<"& digit character.";
        else
        cout<<"Other character.";
    }
    return 0;
}
