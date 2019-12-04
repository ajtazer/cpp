#include<bits/stdc++.h>
using namespace std;
class Item
{
    public:
    int itemno;
    float price;
    void getdata(int i,float j)
    {
        itemno=i;
        price=j;
    }
    void putdata()
    {
        cout<<"\nItems : "<<itemno;
        cout<<"\nPrice : "<<price;
    }
};
Item s1,s2;
int main()
{
    s1.getdata(1001,17.5);
    s2.getdata(1002,29.0);
    s1.putdata();
    s2.putdata();
    return 0;
}