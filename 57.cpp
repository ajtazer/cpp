#include<iostream>
using namespace std;
double carea(float radius)
{
    double area;
    area=(22*radius*radius)/7;
    return area;
}
int main()
{
    float radius;
    cout<<"Enter the radius : \n";
    cin>>radius;
    cout<<"Area of the circle : "<<carea(radius);
    return 0;
}
