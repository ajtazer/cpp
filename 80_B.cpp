#include<bits/stdc++.h>
using namespace std;
class Cars
{
    private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    int price;
    public:
    void setData(string cname,string mname,string ftype,float m,int p);
    void showData();
};
void Cars::setData(string cname,string mname,string ftype,float m,int p)
{
    company_name=cname;
    model_name=mname;
    fuel_type=ftype;
    mileage=m;
    price=p;
}
void Cars::showData()
{
    cout<<"Car Properties :-\n";
    cout<<"---------------------------------------------\n";
    cout<<"Name of the Company : "<<company_name<<"\n";
    cout<<"Name of the Car Model : "<<model_name<<"\n";
    cout<<"Type of Fuel : "<<fuel_type<<"\n";
    cout<<"Mileage of the Car : "<<mileage<<" kmph\n";
    cout<<"Price of the Car : "<<price<<"\n";
}
int main()
{
    Cars vehicle_1;
    vehicle_1.setData("Toyota","Innova","Diesel",28,1700000);
    vehicle_1.showData();
    return 0;
}