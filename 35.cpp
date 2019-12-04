#include<iostream>
using namespace std;
int main()
{
    char str[80];
    int i,c=0;
    cout<<"Enter any string : "<<endl;
    cin.getline(str,80);
    for(i=0;str[i];i++)
        if(str[i]==' ')
            c++;
cout<<"The no. of space in your string is "<<c;
return 0;
}
