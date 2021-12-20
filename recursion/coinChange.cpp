#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void coinChange(int ar[],int val,vector<int> &ans,int n){
    if(val==0){
        for(auto &it : ans)
           cout<<it<<" ";
           cout<<endl;   
        return ;
    }
    if(val<0)return ;
    
    for(int i=0;i<n;i++){
        if(val-ar[i]>=0){ 
           ans.push_back(ar[i]);
           coinChange(ar,val-ar[i],ans,n);
               
           ans.pop_back();
        }
    }


}



int main(){
     
     int v[]={5,10};
      
   vector<int> ans;

   coinChange(v,15,ans,2);

   
     cout<<endl;
   
   }