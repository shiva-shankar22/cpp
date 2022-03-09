#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

string trim(string);
vector<string> splitString(string);

void solve(vector<vector<int>> &arr,int i,int j,int n,int m,vector<int> &ds,vector<vector<int>> &ans){
    if(i==n-1 && j==m-1){
        ds.push_back(arr[i][j]);
        ans.push_back(ds);
        ds.pop_back();
        return;
        
    }
    if(i>=n || j>=m)return;
    ds.push_back(arr[i][j]);
    solve(arr,i+1,j,n,m,ds,ans);
    
    solve(arr,i,j+1,n,m,ds,ans);
    ds.pop_back();
}


int getCount(int n, int m, int h, vector<vector<int>> &arr) {
    // Write your code here
    int cnt=0;
    
    vector<vector<int>> ans;
    vector<int> ds;
     solve(arr,0,0,n,m,ds,ans);
    for(int i=0,l=ans.size();i<l;i++){
         
        for(int j=1,ll=ans[i].size();j<=ll;j++){
            cout<<" for"<<endl;
            if(h%(ans[i][j]+ans[i][ll-j+1])==0)cnt++;
        }
    }
    
    
    
    return cnt%MOD;

}


int main(){
       
       int n=2,m=2,h=4;
       vector<vector<int>> ans,vec={{4,4},
                                    {2,8}};

       vector<int>ds;
      
 

 for(auto &it :ans){ 
    for(auto &i :it)
       cout<<i<<" ";
   cout<<endl;
 }


 cout<<getCount(n,m,h,vec)<<endl;
}