#include<bits/stdc++.h>
using namespace std;

int solveL(vector<int> &arr,int i,int n){
    int ans=0;
    int maxi=-1e8;
    for(int j=i-1;j>=0;j--)
       if(maxi<=arr[j]){
           maxi=arr[j];
           ans++;
       }
       return ans;
}

int solveR(vector<int> &arr,int i,int n){
    int ans=0;
    int maxi=-1e8;
   for(int j=i+1;j<n;j++){
         if(maxi<=arr[j]){
           maxi=arr[j];
           ans++;
       }
   }

    return ans;
}

void solve(vector<int> &arr){

    int n=arr.size();
    int ans=0;
    for(int i=0;i<n;i++){
         int ans=0;
         ans=solveR(arr,i,n);
         cout<<ans<<" ";
    }
}

int main(){
     
     int n;
     cin>>n;
     vector<int> arr(n);

     for(auto &it :arr)cin>>it;

     solve(arr);

    return 0;
}