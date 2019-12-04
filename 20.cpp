#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int n,sum,x,i,f;
cin>>x>>n;
sum=0;
for(i=0;i<n;i=i+2)
{ f=1;
 for(int j=1; j<=i;j++)
   f*=j;

   sum=sum-pow(-x,i)/f;

}
cout<<sum;
	return 0;
}
