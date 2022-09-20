#include<bits/stdc++.h>
using namespace std;


vector<string> ds;
void kPartitions(string &str,int k,int idx,int n,int cnt){
     
    if(cnt==k && idx==n ){
        for(string it :ds)
             cout<<it<<" ";
             cout<<endl;
        return;
    }
  //  if(idx==n)return ;

    for(int i=idx;i<n;i++){
          string s=str.substr(idx,(i-idx)+1);
          ds.push_back(s);
          kPartitions(str,k,i+1,n,cnt+1);
          ds.pop_back();
    }
}

int main(){
        
        string str="abcd";
        int k=3;
        int n=4;
        kPartitions(str,k,0,n,0);
}