#include<bits/stdc++.h>
using namespace std;
int compare(char x[],char y[])
{
    if(strlen(x) != strlen(y))
        return -1;
    else
        {
            int i=strlen(x)-1;
            for(;i>=0;i--)
                if(x[i]!=y[i])
                    return -1;
            return 0;
        }
}
int main()
{
    char x[60],y[60];
    cin.getline(x,60);
    cin.getline(y,60);
    cout<<compare(x,y);
    return 0;
}
