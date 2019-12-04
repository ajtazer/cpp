#include<iostream>
using namespace std;
int main()
{
int no_of_teams,left_overs,no_of_players;
cout<<"Enter the no of players : "<<endl;
cin>>no_of_players;
no_of_teams=no_of_players/5;
left_overs=no_of_players%5;
cout<<"The no of teams will be "<<no_of_teams<<" with "<<left_overs<<" left overs.";
return 0;
}
