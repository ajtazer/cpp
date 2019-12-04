#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    fstream fin;
    fin.open("Worker.txt",ios::in);
    int count=0;
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(fin.eof())
            break;
        if(ch=='')
            count++;
    }
    cout<<"The no. of blank spaces are"<<count<<"\n";
    fin.close();
    getch();
}