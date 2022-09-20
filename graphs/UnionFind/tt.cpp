#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
  int r=0,g=0;
    for(int i=0;i<n;i++)
     if(str[i]=='R') 
        r++;
     else g++;
  
  cout<<min(r,g);
  
  //rgrgr
}