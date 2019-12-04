#include<iostream>
using namespace std;
int main()
{
    int findpos(char s[],char c);
    char string[80],ch;
    int y=0;
    cout<<"Enter the string :"<<endl;
    cin.getline(string,80);
    cout<<"Enter the character to be searched :"<<endl;
    cin.get(ch);
    y=findpos(string,ch);
    if(y==-1)
        cout<<"Sorry! wrong character entered."<<endl;
    return 0;
}
int findpos(char s[],char c)
{
    int flag =-1;
    for (int i=0;s[i];i++)
    {
        if(s[i]==c)
        {
            flag=0;
            cout<<"The character is in the string at position : "<<i+1<<endl;
        }
    }
return(flag);
}
