#include<bits/stdc++.h>
using namespace std;

 void solve(int ar[],int n,int idx,vector<string> &s,string str){
     if(idx>=n){
       s.push_back(str);  
        return;
     }
   
    solve(ar,idx+1,n,s, str + "+" +to_string(ar[idx]));
    solve(ar,idx+1,n,s, str + "-" +to_string(ar[idx]));
      
} 

int fun(string &s){
     
     string t="";
   int ans=0;
   int i,n;
   for( i=0,n=s.size();i<n;i++)
        if(s[i]=='-' || s[i]=='+')break;
        else t+=s[i];
    ans=stoi(t);
    t="";

     for(;i<n;i++){
    
        if(s[i]=='-'){
             int v=stoi(t);
             ans-=v;
             t="";
        }
        else if(s[i]=='')
     }
}

int main(){
     
     int ar[]={51,35,21,12};
     vector<string> s;
     solve(ar,4,1,s,to_string(ar[0]));

     for(string it: s){

     }
}