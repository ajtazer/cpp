#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    clrscr();
    fstream fin;
    fin.open("Worker.txt",ios::in);
    int count=0;
    char ch;
    while(!fin.cof())
    {
        fin>>ch;
        if(isalpha(ch))
            count++;
    }
    cout<<"The no. of alphabets are "<<count<<"\n";
    fin.close();
    getch();
}