#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    vector<int> ar(n);
    vector<int> dp(n);

    for(auto &it :ar)
        cin>>it;
    
    for(int i=0;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(ar[i]>ar[j] && dp[i]<dp[j]+1){
                dp[i]+=dp[j]+1;
            }
        }
    }

    cout<<*max_element(dp.begin(),dp.end());
   

   //printing the sequence

    

    auto it= max_element(dp.begin(),dp.end());
    int t=*it;

  vector<int> ans(*it);

    while(t--){
           auto i=binary_search(ar.begin(),ar.end(),*it);
    }

   return 0;
}