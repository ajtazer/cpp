#include<bits/stdc++.h>
using namespace std;
class ITEM
{
    int itemcode[10];
    float item_price[10];
public:
    void initialize();
    float largest();
    float smallest();
    float sum();
    void display_items();
};
void ITEM::initialize()
{
    for(int i=0;i<10;i++)
    {
        cout<<"Item no : "<<i+1<<"\n";
        cout<<"Enter item code : \n";
        cin>>itemcode[i];
        cout<<"Enter the price : \n";
        cin>>item_price[i];
    }
}
float ITEM::largest()
{
    float large=item_price[0];
    for(int i=0;i<10;i++)
    {
        if(item_price[i]>large)
            large=item_price[i];
    }
    return large;
}
float ITEM::smallest()
{
    float small=item_price[0];
    for(int i=0;i<10;i++)
    {
        if(item_price[i]<small)
            small=item_price[i];
    }
    return small;
}
float ITEM::sum()
{
    float s=0;
    for(int i=0;i<10;i++)
    {
        s+=item_price[i];
    }
    return s;
}
void ITEM::display_items()
{
    cout<<"\n~ Item Price ~\n";
    for(int i=0;i<10;i++)
    {
        cout<<"Item no : "<<i+1<<"\t";
        cout<<"Item code : "<<itemcode[i]<<"\t";
        cout<<"Item price : "<<item_price[i]<<"\n";
    }
}
int main()
{
    ITEM order;
    order.initialize();
    int ch=0;
    do
    {
        cout<<"\n~ MAIN MENU ~\n";
        cout<<"\nno.1 Display Largest Price.";
        cout<<"\nno.2 Display Smallest Price.";
        cout<<"\nno.3 Display Sum of Prices.";
        cout<<"\nno.4 Display Items List.";
        cout<<"\nno.5 Exit.";
        cout<<"\nEnter your choice(1-3) : ";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"The largest price is "<<order.largest()<<"\n";
            break;
            case 2:cout<<"The Smallest price is "<<order.smallest()<<"\n";
            break;
            case 3:cout<<"Sum of prices of all items is "<<order.sum()<<"\n";
            break;
            case 4:order.display_items();
            break;
            case 5:break;
            default:cout<<"\nWRONG CHOICE\n";
            break;
        }
    }while(ch>0 && ch<6);
    return 0;
}