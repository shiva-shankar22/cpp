#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string &str,int l,int r){
    while(l<=r)
        if(str[l++]!=str[r--])return false;
  return  true;
}

void solve(int idx,string &str,vector<string> &ds,vector<vector<string>> &ans){
        
        if(idx==str.size()){
            ans.push_back(ds);
        }

        for(int i=idx;i<str.size();i++){
             if(isPalindrome(str,idx,i)){
                 string s= str.substr(idx,i-idx+1);
                 ds.push_back(s);
                 solve(i+1,str,ds,ans);
                 ds.pop_back();
             }
        }

}



int main(){

  vector<string> ds;
  vector<vector<string>> ans;
  string str="aaabbaabb";
   solve(0,str,ds,ans);

    
    for(auto it : ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}