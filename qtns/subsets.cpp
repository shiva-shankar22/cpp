#include<iostream>
#include<vector>
#include<map>
using namespace std;


void solve(vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans,int i,int  n){
           if(i>=n){
               ans.push_back(ds);
               return ;
           }
              ds.push_back(arr[i]);   
           solve(arr,ds,ans,i+1,n);
           ds.pop_back();

           solve(arr,ds,ans,i+1,n);
}

int subsets(vector<int> &arr,int d){
    vector<vector<int>> ans;
    int n=arr.size();
    vector<int> ds;
     solve(arr,ds,ans,0,n);


      for(auto &it:ans){
          for(auto &i:it)
             cout<<i<<" ";
             cout<<endl;
      }


     int maxi=0;
     for(auto &it: ans){

          int m=it.size();
        
          bool f=true;

          for(int i=1;i<m;i++){
               if(arr[i-1]-arr[i]==d){
                   continue;
               }
               else{
                   f=false;
                   break;
               }
          }
          if(f){
              maxi=max(maxi,m);
          }

     }
     

    return maxi;
}

int main(){

   /*
6 2
1 2 3 4 6 8
   */
         vector<int> v={2,4,6,8};
         int m=4,d=2;bool f=true;
         for(int i=1;i<m;i++){
               if((v[i]-v[i-1])==d){
                   continue;
               }
               else{
                   f=false;
                   break;
               }
          }

          if(f)cout<<"ok";
          else cout<<"no";
         
}