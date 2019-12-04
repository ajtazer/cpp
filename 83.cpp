#include<bits/stdc++.h>
using namespace std;
class Student
{
    int rollno;
    char name[25];
    float marks;
    char grade;
    
    public:
    void readStudent()
    {
        cout<<"\nEnter rollno : ";
        cin>>rollno;
        cout<<"\nEnter name : ";
        cin>>name;
        cout<<"\nEnter marks : ";
        cin>>marks;
    }
    void dispStudent()
    {
        calcGrade();
        cout<<"\nRoll no. : "<<rollno;
        cout<<"\nName : "<<name;
        cout<<"\nMarks : "<<marks;
        cout<<"\nGrade : "<<grade;
    }
    int getRollno()
    {
        return rollno;
    }
    float getMarks()
    {
        return marks;
    }
    void calcGrade()
    {
        if(marks>=75)
            grade='O';
        else if(marks>=60)
            grade='A';
        else if(marks>=50)
            grade='B';
        else if(marks>=40)
            grade='C';
        else
            grade='F';        
    }
};
int main()
{
    Student XIIa[10];
    for(int i=0;i<10;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<" : ";
        XIIa[i].readStudent();
    }
    int choice,rno,pos=-1,highmarks=0;
    do
    {
        cout<<"\n~ MAIN MENU ~\n";
        cout<<"1.Specific student\n";
        cout<<"2.Topper\n";
        cout<<"3.Exit\n";
        cout<<"\nEnter your choice(1-3) : ";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"\nEnter Roll no. of student whose details U want to see : ";
            cin>>rno;
            for(int i=0;i<10;i++)
            {
                if(XIIa[i].getRollno()==rno)
                {
                    XIIa[i].dispStudent();
                    break;
                }
                else if(XIIa[i].getRollno()!=rno)
                {
                    cout<<"\nInvalid Rollno.!!!\n";
                    break;
                }
            }
            break;
            case 2:for(int i=0;i<10;i++)
            {
                if(XIIa[i].getMarks()>highmarks)
                {
                    pos=i;
                    highmarks=XIIa[i].getMarks();
                }
            }
            XIIa[pos].dispStudent();
            break;
            case 3:break;
            default:cout<<"\nWRONG CHOICE!!\n";
            break;
        }
    }while(choice>0 && choice<4);
    return 0;
}