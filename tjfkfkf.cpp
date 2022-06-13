#include<bits/stdc++.h>
using namespace std;


int main(){


    string str="abcd";
    int k=2;
    int n=str.length();
    for(int i=0;i<n;i++){ 
     //  if(k-i==2)
        string s=str.substr(i,i+k);

      //  if(s.length()==k)
           cout<<s<<endl; 
    }
}