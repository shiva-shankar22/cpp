#include<iostream>
#include<vector>
using namespace std;

int main(){
     int n;
     cin>>n;
     vector<int> arr(n);

     for(auto &it :arr)cin>>it;
   int j=0,i=0;int maxi=0;
     for( i=0;i<n;i++){
          if(arr[i]!=1){
           maxi=max(maxi,(i-j));
           j=i+1;
          }
     }

     maxi=max(maxi,i-j);
     cout<<maxi<<endl;
    return 0;
}