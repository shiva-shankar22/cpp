#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str,int i,int j){
    while(i<=j)
      if(str[i++]!=str[j--])return false;

  return true;
}

vector<string> ds;
int fun(string str,int idx){
     if(idx==str.size())return 0;
     int ans=1e8;
    // int cnt=1e8;
     for(int i=idx;i<str.size();i++){
       //  string s=str.substr(idx,str.size()-idx-1);
         if(isPalindrome(str,idx,i))
             ans=min(ans,1+fun(str,i+1));
     }
     return ans;
}

int main(){
     
     string str="abbcabba";

     cout<<fun(str,0)<<endl; 
   //  cout<<str.substr(1,str.size()-3-1);

}