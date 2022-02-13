#include<bits/stdc++.h>
using namespace std;


int solve(vector<vector<int>> &arr,int i,int j){
   if(i==0 &&j==0)return arr[i][j];
   
   if(i<0 || j<0)return INT_MAX;
   int left=INT_MAX,right=INT_MAX;

   left=solve(arr,i-1,j);
   right=solve(arr,i,j-1);

 return min(left,right)+arr[i][j];
}

int main(){
       vector<vector<int>> arr{ {1,2,3},
                                {4,5,6},
                                {7,8,9} };
    
     cout<<endl<<solve(arr,2,2)<<endl;
    return 0;
}