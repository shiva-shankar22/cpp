#include<stack>
#include<iostream>
#include<string>

using namespace std;
int main(){
    
    string s;
    cin>>s;

    stack<char> st;
   int ans=0;
    for(int i=0,n=s.size();i<n;i++){
          if(s[i]=='(')
               st.push(s[i]);
          else if(s[i]==')' && !st.empty() && st.top()=='('){
            st.pop();
            ans++;
          }
    }

    cout<<ans;
}