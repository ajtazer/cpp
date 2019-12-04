#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    clrscr();
    char str[40];
    int i,j,len,d=1;
    cout<<"Enter the string = ";
    gets(char);
    for(len=0;str[len!='\0'];++len)
        for(i=0,j=len-1;i<len/2;++i,--j)
        {
            if(str[i]!=str[j])
            d=0;
        }
    if(d==1)
        cout<<"\nIt is Palindrome.";
        else
        {
                cout<<"\nIt is not Palindrome";
        }
    getch();
}