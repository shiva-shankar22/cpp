#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);

    for(int i=0;i<n;i++)cin>>ar[i];

    if(k>=n)k=k%n;
    k--;
    vector<int> ans;
    if(k!=0){
        int val=ar[k];
        cout<<val<<endl;
        ans.push_back(val);
        for(int i=0;i<n;i++)
            if(ar[i]==val)continue;
            else 
               ans.push_back(ar[i]);
    }
    else ans=ar;
    
    for(int i: ans)cout<<i<<" ";
   
   // cout<<3%4;

}