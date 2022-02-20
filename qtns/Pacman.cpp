#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &res,vector<int> idxs,string str,int r,int idx){
         int m=str.length();
        for(int i=0,n=idxs.size();i<n;i++){
               if(idxs[i]-r<=0){
                   for(int j=0,l=i+r;(j<=l&&j<m);j++)
                        res[idx][j]=0;
               }
               else {
                   
                   for(int j=idxs[i]-r,l=i+r;(j<=l&&j<m);j++)
                        res[idx][j]=0;
               }
        }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        vector<string> arr;
        
        for(int i=0;i<n;i++){
            string s;
            for(int j=0;j<n;j++){
                char c;
                cin>>c;
                if(c!=' ')
                  s+=c;
            }
            arr.push_back(s);
        }

        vector<vector<int>> res(n,vector<int> (n,0));
        vector<vector<int>> idxs(n);
        for(int i=0;i<n;i++){
            for(int j=0,l=arr[i].length();j<n;j++){
                  if(arr[i][j]=='P')res[i][j]=1;
                  else idxs[i].push_back(j);
            }
        }
         
         for(int i=0;i<n;i++){

             solve(res,idxs[i],arr[i],r,i);
         }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cnt+=res[i][j];
        }
          
          cout<<cnt<<endl;
    }
}