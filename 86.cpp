#include<bits/stdc++.h>
using namespace std;
class Time
{
    int hrs,mins,secs;

    public:
    int tot_secs;
    void gettime(int h,int m,int s)
    {
        hrs=h;
        mins=m;
        secs=s;
        tot_secs=(hrs*60)+(mins*60)+secs;
    }
    void puttime()
        cout<<"Time is "<<hrs<<":"<<mins<<":"<<secs<<"\n";
    void convert(Time t,char ch);
    void sum(Time t1,char ch);
}