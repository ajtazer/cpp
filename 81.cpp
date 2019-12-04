#include<iostream>
using namespace std;
class Salesman
{
    int salesman_no;
    char salesman_name[50];
    int product_no;
    float target,sales_made,commission=0;
    void calc_common(); 
    public:
    void read_Data();
    void printData();
};
void Salesman::read_Data()
{
    cout<<"Enter Salesman no : \n";
    cin>>salesman_no;
    cout<<"Enter Salesman name : \n";
    cin>>salesman_name;
    cout<<"Enter the product no : \n";
    cin>>product_no;
    cout<<"Enter target and sales made : \n";
    cin>>target>>sales_made;
}
void Salesman::calc_common()
{
    if(target<=sales_made)
        commission=(sales_made-target)*0.2;
}
void Salesman::printData()
{   calc_common();
    cout<<"Salesman No : "<<salesman_no<<endl;
    cout<<"Salesman Name:  "<<salesman_name<<endl;
    cout<<"Commission : "<<commission<<endl;
}
int main()
{
    Salesman object1;
    object1.read_Data();
    object1.printData();
    return 0;
}