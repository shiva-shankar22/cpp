/*
   
   Problem states that  set of subsequences whose sum is equal to given target 

   NOTE: no duplicate sequences , and all sequences should be in lexicographical order 
   
  Brute Force :- sort array and find sequence and insert into set 
  
  Optimal Solution :- sort given array and modify the recursion call such that no duplicate elements are considered
  

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void fun(vector<int> &arr,int idx,int n,vector<int> &ds,vector<vector<int>> &ans,int target){
         
          
          //if(target==0){ 
                     ans.push_back(ds);
         // return ;
          //}
       for(int i=idx;i<n;i++){
           if(i>idx && arr[i]==arr[i-1])continue;

           //if(arr[i]>target)break;
           
           ds.push_back(arr[i]);
           fun(arr,idx+1,n,ds,ans,target-arr[i]);
            ds.pop_back();
       }


}


void comboSum(vector<int> arr,int target){

    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
 vector<int> ds;
    fun(arr,0,arr.size(),ds,ans,target);

    for(auto &it :ans){
        for(auto &i: it)
          cout<<i<<" ";
          cout<<endl;
    }
}


int main(){
    
    vector<int> ar={1,1,2,2,1,3,4,5,2};
     
     comboSum(ar,5);

    return 0;
}