#include<iostream>
using namespace std;
int main()
{
int hostel_acc,college_acc;
char student_type;
cout<<"Enter the type [A or B] : "<<endl;
cin>>student_type;
if(student_type=='A')
{
college_acc=200;
hostel_acc=0;
}
else if(student_type=='B')
{
college_acc=0;
hostel_acc=200;
}
cout<<"College account balance : "<<college_acc<<endl;
cout<<"Hostel account balance : "<<hostel_acc<<endl;
return 0;
}

