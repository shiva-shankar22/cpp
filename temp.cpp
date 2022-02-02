#include<bits/stdc++.h>
using namespace std;

bool isValid(int q,int i,int j,int ele,vector<int> arr){
    bool res=false;
    if(q==1){
        int maxi=-1;
        
        for(int k=i;k<=j;k++){
            maxi=max(maxi,arr[k]);
        }
        
        if(maxi==ele)res=true;
        
    }
    
    else{
        int maxi=-1;
        
        for(int k=i;k<=j;k++){
            maxi=min(maxi,arr[k]);
        }
        
        if(maxi==ele)res=true;
        
    }
    
    return res;
}


void fun(vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=idx;i<arr.size();i++){
        swap(arr[i],arr[idx]);
        fun(arr,ds,ans,idx+1);
        swap(arr[idx],arr[i]);
    }
}

vector<vector<int>> permute(vector<int> arr){
    vector<int> ds;
    vector<vector<int>> ans;
    fun(arr,ds,ans,0);

    return ans;
}



int main() {

	// Write your code here
    
    int n,m;
    cin>>n>>m;
    
    vector<int> ar(n+1);
    
    vector<vector<int>> q(m,vector<int> (4));
    
    for(auto &it: q){
        for(auto &i:it){
            cin>>i;
        }
    }
    
    for(int i=0;i<n+1;i++)
         ar[i]=i;
    
   vector<vector<int>> A = permute(ar);
    
 int k =A.size();
    
   for(int i=0;i<k;i++){
        
    vector<int> arr=A[i];
    
    
    
    bool flg=true;
    for(auto &it: q){
        
        if(isValid(it[0],it[1],it[2],it[3],arr));
        
        else {
            flg=false;
            break;
        }
        
    }
    
    if(flg){ 
    for(auto &it:arr){
        cout<<it<<" ";
    }
      break;
     }
       
       
   }
    
    return 0;
}