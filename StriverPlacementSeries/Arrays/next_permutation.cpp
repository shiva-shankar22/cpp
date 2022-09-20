#include<bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int> &arr,int n){
      int idx=-1;
      for(int i=n-2;i>=0;i--)
         if(arr[i]<arr[i+1]){
              idx=i;
              break;
          }
   int val=arr[idx],i;
   for( i=n-1;i>idx;i--)
         if(arr[i]>val)break;
    swap(arr[i],arr[idx]);


    reverse(arr.begin()+idx+1,arr.end()); 

} 

int main(){

    vector<int> ar={1,2,3};
    
    vector<int> ar2={1,2,3};

    // nextPermutation(ar,7);
    // next_permutation(ar2.begin(),ar2.end());
    
    // for(auto &it:ar)
    //    cout<<it<<" ";
    //    cout<<endl;
    //  for(auto &it:ar2)
    //    cout<<it<<" ";
       string str="ssgg";
      
      cout<<str<<endl;
}