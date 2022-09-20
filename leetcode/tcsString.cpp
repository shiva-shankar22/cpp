#include<bits/stdc++.h>
using namespace std;

 string solve(string &s, int k) {
        stack<pair<char,int>> st;
        string ans ="";
        for(auto &it :s){
            if(st.empty()|| st.top().first!=it)st.push({it,1});
            
            else{
                int val=st.top().second;
                st.top().second=val+1;
            }
            if(!st.empty() &&st.top().second==k)st.pop();
        }
        
        while(!st.empty()){
            int val=st.top().second;
            char ch=st.top().first;
            st.pop();
            while(val--)ans+=ch;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main(){
  
   string str;
   cin>>str;
   int k;cin>>k;

  cout<<solve(str,k);
   

}