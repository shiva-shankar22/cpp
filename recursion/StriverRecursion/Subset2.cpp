/*

Problem states that generate all subsequences without duplicates

Navie:- genrate all sequences and store it in set 

Optimal :- sort array and modify array such that no sequence is duplicated

*/


#include<bits/stdc++.h>
using namespace std;


void fun(vector<int> &ar,int idx,vector<vector<int>> &ans,vector<int> &ds){
     ans.push_back(ds);
      
   for(int i=idx;i<ar.size();i++){
       if(i!=idx && ar[i]==ar[i-1])continue;

       ds.push_back(ar[i]);
       fun(ar,idx+1,ans,ds);
       ds.pop_back();
   }


}


void Subsets(vector<int> arr){
     vector<int> ds;
     vector<vector<int>> ans;
    
    sort(arr.begin(),arr.end());
    fun(arr,0,ans,ds);
    
     for(auto &it: ans){
         for(auto &i :it ){
            cout<<i<<" ";
            cout<<endl;
         }
     }
}


int main(){
     
     vector<int> arr={1,1,1,2,2,3,3};

   
    Subsets(arr);
    return 0;
}