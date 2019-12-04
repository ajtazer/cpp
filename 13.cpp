#include<iostream>
using namespace std;
int main()
{
char i,j;
cout<<"Enter the character : "<<endl;
cin>>i;
if(i>=97 && i<=122)
{
j=i-32;
cout<<"The upper case character corresponding to "<<i<<" is "<<j;
}
else if (i>=65 &&  i<=90)
{
j=i+32;
cout<<"The lower case character corresponding to "<<i<<" is "<<j;
}
else
cout<<i<<" is not a letter";
return 0;
}
