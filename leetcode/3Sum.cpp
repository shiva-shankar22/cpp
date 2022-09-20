#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int ar[3][4]={ {3,3,1,1},
                 {2,2,1,2},
                 {1,1,1,2}
               };
  int rows=3,cols=4;
  vector<vector<int>> ans(rows,vector<int>(cols));
  for(int j=cols-1;j>=0;j--){
     int k=j;//cout<<"endl"<<endl;
     vector<int>temp;
     for(int i=0;i<rows&& k<cols;i++,k++){ 
         temp.push_back(ar[i][k]);
       //  cout<<ar[i][k]<<" ";
     }
     sort(temp.begin(),temp.end());
     k=j;int l=0;
    for(int i=0;i<rows&& k<cols;i++,k++){ 
         ans[i][k]=temp[l++];
     }

    cout<<endl;
  } 
 // cout<<"done"<<endl;
 for(int k=1;k<rows;k++){
    vector<int> temp;
    int i=k;
    for(int j=0;i<rows;i++,j++){ 
       //  cout<<ar[i][j]<<" ";
         temp.push_back(ar[i][j]);
    }
sort(temp.begin(),temp.end());
 int l=0;
  for(int j=0;i<rows;i++,j++){ 
       ans[i][j]=temp[l++];
       
    }
    cout<<endl;
 }


   for(auto it: ans){
       for(int i: it) 
          cout<<i<<" ";
          cout<<endl;
   }

  return 0;
 
}