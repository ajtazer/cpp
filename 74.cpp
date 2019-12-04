#include<bits/stdc++.h>
using namespace std;
const int size=5;
struct Student
{
    int rollno;
    float M_eng,M_comp,M_maths;
}sarr[size],t1,t2;
float total,avg,top1=0,top2=0;
int ndist=0,nfail=0;
void stu_result()
{
    for(int i=0;i<size;i++)
    {
        total=sarr[i].M_eng+sarr[i].M_maths+sarr[i].M_comp;
        avg=total/3;
        if(avg>=75)
            ndist++;
            else if(avg<40)
                nfail++;
        if(avg>top1)
        {
            top1=avg;
            t1=sarr[i];
        }
        else if(top2<avg && avg<=top1)
        {
            top2=avg;
            t2=sarr[i];
        }
    }
    cout<<"\nNumber of distinction holders : "<<ndist;
    cout<<"\nNumber of failed students : "<<nfail;
    cout<<"\nTop most Scorer : \n";
    cout<<"Rollno : "<<t1.rollno<<"\nEnglish : "<<t1.M_eng<<"\tMaths : "<<t1.M_maths<<"\tComputer : "<<t1.M_comp;
    cout<<"\nSecond Topper : \n";
    cout<<"Rollno : "<<t2.rollno<<"\nEnglish : "<<t2.M_eng<<"\tMaths : "<<t2.M_maths<<"\tComputer : "<<t2.M_comp;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the Rollno. : \n";
        cin>>sarr[i].rollno;
        cout<<"Enter the marks of English : \n";
        cin>>sarr[i].M_eng;
        cout<<"Enter the marks of maths : \n";
        cin>>sarr[i].M_maths;
        cout<<"Enter the marks of Computer : \n";
        cin>>sarr[i].M_comp;
    }
    stu_result();
    return 0;
}