#include<iostream>
using namespace std;
int main()
{
    int find(char s[],char ch);
    {
        char str[80],c;
        int a=0;
        cout<<"Enter the string : "<<endl;
        cin.getline(str,80);
        cout<<"Enter the character to  be searched : "<<endl;
        cin.get(c);
        a=find(str,c);
        if(a==-1)
            cout<<"Sorry entered the wrong character.";
            return 0;
    }
    }
    int find(char s[],char ch)
    {
        int b=-1;
        for(int i=0;s[i];i++)
        {
            if(s[i]==ch)
            {
                b=0;
                cout<<"The character you entered is "<<s[i]<<" at position "<<i+1<<endl;
            }
        }
    return b;
    }
