#include<iostream>
using namespace std;
int main()
{
    char str[80];
    int a=0;
    cout<<"Enter the string : "<<endl;
    cin.getline(str,80);
    for(int i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
        {
            a++;
        }
cout<<"The number of lowercase characters in string : "<<a;
return 0;
}
