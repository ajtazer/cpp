#include<iostream>
#include<conio.h>
class base
{
    public;
    int x;
    void getdata()
    {
        cout<<"\nEnter the value of x = ";
        cin>>x;
    }
};
class derive : public base
{
    private:
    int y;
    public:
    void readdata()
    {
        cout<<"\nEnter the value of y = ";
        cin>>y;
    }
    void product()
    {
        cout<<"\nProduct = "<<x*y;
    }
} ;
int main()
{
    clrscr();
    derive a;
    a.getdata();
    a.readdata();
    a.product();
    getch();
}