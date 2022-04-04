#include<bits/stdc++.h>
using namespace std;



int solve(int n){
    vector<int> dp(n+1);
 vector<int> arr(n+1);
  dp[0]=0;

    for(int i=1;i<n;i++){
        int l =dp[i-1]+abs(arr[i]-arr[i-1]);
      int s=1e8;
      if(i>1)s=dp[i-2]+abs(arr[i]-arr[i-2]);
      dp[i]=min(l,s);
   }
return dp[n-1];

}