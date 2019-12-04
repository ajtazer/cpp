#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    void cas(char);
    char c;
    cin>>c;
    cas(c);
    return 0;
}
void cas(char ch)
{
    if(isalpha(ch))
    {
        if(islower(ch))
        cout<<"Lowercase.";
        else if(isupper(ch))
        cout<<"Uppercase.";
    }
    else
    cout<<"Not an alphabet.";
}
