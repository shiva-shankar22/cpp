#include<bits/stdc++.h>
using namespace std;


vector<int> nse(vector<int> &ar){
    int n=ar.size();
    vector<int> ans(n);
      stack<int> st;
      st.push(n-1);
      ans[n-1]=0;
    for(int i=n-2;i>=0;i--){
        
          while(!st.empty() && ar[st.top()] >= ar[i]){
            
            st.pop();
          }
         if(!st.empty()) 
          ans[i]= (st.top()-i)-1;
         else ans[i]=n-i-1; 
          st.push(i);
    }

    return ans;
}

vector<int> pse(vector<int> &ar){
    int n=ar.size();
    vector<int> ans(n);
      stack<int> st;
      st.push(0);
      ans[0]=0;
    for(int i=1;i<n;i++){
        
          while(!st.empty() && ar[st.top()] >= ar[i]){
            
            st.pop();
          }
         if(!st.empty()) 
          ans[i]= (i-st.top())-1;
         else ans[i]=i-1; 
          st.push(i);
    }

    return ans;
}



int main(){
      
      vector<int> ar={1,5,3,4,2,6,7,1,8};
      vector<int> p=pse(ar);
      vector<int> n=nse(ar);


     
} 