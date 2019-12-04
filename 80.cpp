#include<bits/stdc++.h>
using namespace std;
class Cars
{
    private:
    char company_name[50];
    char model_name[50];
    char fuel_type[50];
    float mileage;
    int price;

    public:
    void setData()
    {
        cout<<"\nEnter the Company Name : \n";
        cin>>company_name;
        cout<<"Enter the Model Name : \n";
        cin>>model_name;
        cout<<"Enter the fuel type : \n";
        cin>>fuel_type;
        cout<<"Enter its mileage : \n";
        cin>>mileage;
        cout<<"Enter its price : \n";
        cin>>price;
    }
    void showData()
    {
        cout<<"Car Properties :-\n";
        cout<<"--------------------------------------------\n";
        cout<<"Name of the Company : "<<company_name<<"\n";
        cout<<"Name of the Car Model : "<<model_name<<"\n";
        cout<<"Type of Fuel : "<<fuel_type<<"\n";
        cout<<"Mileage of the Car : "<<mileage<<" kmph\n";
        cout<<"Price of the Car : "<<price<<"\n";
    }
}vehicle_1,vehicle_2;
int main()
{
    vehicle_1.setData();
    vehicle_1.showData();
    vehicle_2.setData();
    vehicle_2.showData();
    return 0;
}
