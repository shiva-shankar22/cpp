#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long findD(int ar[],int n,int val,vector<long long> &dp){
    if(val==0)return 1;
   
    if(dp[val]!=-1)return dp[val];

    if(val<0)return 0;
    int x=0;
   for(int i=0;i<n;i++){
       if(val-ar[i]>=0)
       x+=findD(ar,n,val-ar[i],dp);
     
   }

   return dp[val]=x;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int ar[]={1,2};
    int val;
    cin>>val;
    vector<long long> dp(val+1,-1);

    


   

    cout<<findD(ar,2,val,dp);

 cout<<endl<<endl;

    for(auto it:dp)
      cout<<it<<"  ";
    return 0;
}

