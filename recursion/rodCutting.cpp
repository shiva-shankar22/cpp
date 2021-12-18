
#include <bits/stdc++.h>
#include<iostream>
using namespace std;



int rodCutting(int ar[],int n,int curr){
    if(curr==0)return 0;
    int mx=INT_MIN;
    for(int i=1;i<=n;i++){
        
        if(curr-i>=0)
          mx=max(mx,ar[i-1]+rodCutting(ar,n,curr-i));
       
    }
    return mx;
}




int main(){

   int ar[]={1,2,10,5};
   
   int n=4,len=4;
   
   vector<vector<int>> dp(n+1,vector<int> (len+1,-1));
   
   cout<<rodCutting(ar,4,4);

    return 0;
}
