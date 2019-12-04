#include<iostream>
using namespace std;
int main()
{
    int num1=0,num2=0,num3=0;
    char str[50];
    cout<<"Enter the string : \n";
    cin.getline(str,50);
    for(int i=0;str[i];i++)
        if(str[i]!=' ')
        {
            if(str[i]>='a' && str[i]<='z')
                num1+=1;
            else if(str[i]>='A' && str[i]<='Z')
                num1+=1;
            else if(str[i]>='0' && str[i]<='9')
                num2+=1;
            else
                num3+=1;    
        }
    cout<<"\nNumber of words : "<<num1;
    cout<<"\nNumber of digits : "<<num2;
    cout<<"\nNumber of symbols : "<<num3;
    return 0;
}