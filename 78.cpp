#include<bits/stdc++.h>
using namespace std;
float area(float s1,float s2,float s3)
{
    float s,ar;
    s=(s1+s2+s3)/2;
    ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return ar;
}
float area(float s1,float s2)
{
    return (s1*s2);
}
float area(float s1)
{
    return(s1*s1);
}
int main()
{
    int choice;
    float s1,s2,s3;
    do
    {
        cout<<"\nMain Menu\n";
        cout<<"1. Area of Triangle\n";
        cout<<"2. Area of Square\n";
        cout<<"3. Area of Rectangle\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice(1-4) : ";
        cin>>choice;
        cout<<"\n";
        switch(choice)
        {
            case 1 : cout<<"Enter 3 sides : \n";
            cin>>s1>>s2>>s3;
            cout<<"Area of triangle : "<<area(s1,s2,s3);
            cout<<"\n";
            break;
            case 2 : cout<<"Enter a side : \n";
            cin>>s1;
            cout<<"Area of square : "<<area(s1);
            cout<<"\n";
            break;
            case 3 : cout<<"Enter 2 sides : \n";
            cin>>s1>>s2;
            cout<<"Area of rectangle : "<<area(s1,s2);
            cout<<"\n";
            break;
            case 4 : exit(0);
            default :cout<<"Wrong Choice!!\n";
        };
    }while(choice>0 && choice<=4);
    return 0;
}
