#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char str[25];
    cin.getline(str,25);
    for(int i=0;str[i];i++)
    {
        if(isupper(str[i]))
        cout<<str[i]<<" is already in uppercase."<<endl;
        else if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
            cout<<str[i]<<" is changed."<<endl;
        }
    }
    int x=strlen(str);
    cout.write(str,x);
        return 0;
}
