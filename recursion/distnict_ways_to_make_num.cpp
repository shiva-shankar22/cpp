#include<vector>
#include<iostream>
using namespace std;


bool isRepeated(vector<vector<int>> &ref,vector<int> &ans){
    int n=ref.size(),m=ans.size();
     if(n==0)return false;
    for(int i=0;i<n;i++){
        if(ref[i].size()==m)
          for(int j=0;j<m;j++){
              if(ref[i][j]!=ans[j])return false;
          }
        else 
          return false;
    }

    return true;

}
void findDcoins(int ar[],int val ,int n, vector<vector<int>> &ref,vector<int> &ans){
    if(val==0){
        if(isRepeated(ref,ans))return;
        else{
            ref.push_back(ans);
            for(auto &it : ans)
              cout<<it<<" ";
              cout<<endl;
        }
           return ;
    }
    if(val<0)return;

    for(int i=0;i<n;i++){
        if(val-ar[i]>=0){
            ans.push_back(ar[i]);
            findDcoins(ar,val-ar[i],n,ref,ans);
            ans.pop_back();
        }
    }
}

int main(){

    int ar[]={1,2};
    int val=5;
    vector<vector<int>> ref;vector<int> ans;
    findDcoins(ar,val,2,ref,ans);

    cout<<endl;

}