#include<bits/stdc++.h>
using namespace std;


bool util(vector<int> &arr,int i,int tar){
    if(i==0){
        if((tar-arr[0]==0) || tar==0)return true;
        return false;
    }
    if(tar==0)return true;
   bool fg1=false,fg2=false;
   if(tar-arr[i]>=0)
      fg1= util(arr,i-1,tar-arr[i]);
    
    fg2=util(arr,i-1,tar);
   
   return (fg1 || fg2);
}


bool solve(vector<int> &arr,int tar){
         int n=arr.size();
         return util(arr,n-1,tar);
}


int main(){
     
 vector<int> arr={1,2,3};

 if(solve(arr,5))
     cout<<"helo"<<endl;
    else cout<<"hola";

    return 0;
}