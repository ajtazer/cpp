#include<iostream>
using namespace std;
int main()
{
    float cube(float);         //declaration of function.
    float x,y;
    cout<<"Enter number whose cube is to be calculated : ";
    cin>>x;
    y=cube(x);                 //call the function and assign.
                               //its return value to variable y.
    cout<<"The cube of "<<x<<" is "<<y;
    return 0;
}
    float cube(float a)
    {
        float n;
        n=a*a*a;
        return (n);
    }
