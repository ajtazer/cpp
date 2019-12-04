#include<iostream>
using namespace std;
int main()
{
    int exp,sal,age;
    cout<<"Are you Experienced? If yes type '1' else '0' "<<endl;
    cin>>exp;
    cout<<"What's your age?"<<endl;
    cin>>age;
    sal=(exp)?((age>35)?6000:(age>28)?4800:3000):2000;
    cout<<"Your salary will be : "<<sal;
    return 0;
}
