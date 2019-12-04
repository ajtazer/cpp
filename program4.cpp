#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    clrscr();
    int n,r;
    cout<<"\nEnter the value of N = ";
    cin>>n;
    cout<<"\nEnter the value of R = ";
    cin>>r;
    if(r>n)
        cout<<"\nNOT VALID";
    else
    {
        int factorial=1,result;
        for(int i=1;i<=n;i++)
        {
            factorial=factorial*i;
            result=factorial/((n-r)*r);
            cout<<"\n\nBinomial Cofficient = "<<result;
        }
        getch();
    }
    
}