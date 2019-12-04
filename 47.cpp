#include<iostream>
using namespace std;
int main()
{
    void noob(char);
    char a;
    cout<<"Enter a character : \n";
    cin>>a;
    noob(a);
    return 0;
}
void noob(char a)
{
    char x;
    for(int i=0;i<6;i++)
        {
        x=a+i;
        cout<<x<<"\t";
        }
}
