#include<bits/stdc++.h>
using namespace std;

int util(vector<vector<int>> &arr,int i,int j,int n){
     if(i==n-1)return  arr[i][j];

     int left=INT_MAX,right=INT_MAX;

     left=util(arr,i+1,j,n)+arr[i][j];
     right=util(arr,i+1,j+1,n)+arr[i][j];

     return min(left,right);
}

int solve(vector<vector<int>> &arr){
     
     return util(arr,0,0,arr.size());
}

int main(){
     
   vector<vector<int>> arr={ {1},
                               {2,3},
                               {4,5,6}   ,
                                {7,8,9,10},
                                {11,12,13,14,15} };
     cout<<endl<<solve(arr)<<endl;

    return 0;
}