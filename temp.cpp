#include<iostream>
using namespace std;



int main(){

     int x=28;

  int dt;
  cout<<"enter date ";cin>>dt;

     for(int i=0;i<28;i++){ 
       x=(i%7);
switch (x)
{
case 0:cout<<i<<" monday"<<endl;
    break;

    case 1: cout<<i<<" tuesday"<<endl;break;
    case 2 :cout<<i<<" wednesday"<<endl; break;

    case 3: cout<<i<<" thurs"<<endl;break;
    case  4:cout<<i<<" Fri"<<endl; break;
    case 5: cout<<i<<" SAt"<<endl;break;
    case 6 :cout<<i<<" Sunday"<<endl; break;
    
default: cout<<i<<" not in range"<<endl;
    break;
 } 
}

cout<<"ANS\n";
int i;

switch (i=(dt%7)-1)
{
case 0:cout<<i<<" monday"<<endl;
    break;

    case 1: cout<<i<<" tuesday"<<endl;break;
    case 2 :cout<<i<<" wednesday"<<endl; break;

    case 3: cout<<i<<" thurs"<<endl;break;
    case  4:cout<<i<<" Fri"<<endl; break;
    case 5: cout<<i<<" SAt"<<endl;break;
    case 6 :cout<<i<<" Sunday"<<endl; break;
    
default: cout<<" not in range"<<endl;
    break;
 }

    return 0;
}