#include<bits/stdc++.h>
using namespace std;


//memoize the functions based on index and prev_index

int lis(vector<int> &arr,int idx,int prevIdx,int n){
    if(idx==n)return 0;
   int len=0;
    if(prevIdx==-1 || arr[prevIdx]<arr[idx])len= 1+ lis(arr,idx+1,idx,n);
 // int len=0;

      len=max(len,lis(arr,idx+1,prevIdx,n));

      return len;
}

int main(){
   
   vector<int> arr={1,2,3,4,5,4,8,9,6};

   cout<<lis(arr,0,-1,9)<<endl;
}