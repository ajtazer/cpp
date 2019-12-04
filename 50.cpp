#include<iostream>
using namespace std;
int main()
{
    void loci(int,char);
    int a;
    char ch;
    loci(a,ch);
    return 0;
}
void loci(int,char)
{
    int a;
    char ch;
    cout<<"Enter the character : \n";
    cin>>ch;
    cout<<"Enter the number : \n";
    cin>>a;
    if(a)
    {
        for(int i=0;i<a;i++)
            cout<<ch<<"\t";
    }
    else
    {
        cout<<ch<<"\t"<<ch;
    }
}
