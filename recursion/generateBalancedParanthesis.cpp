#include<vector>
#include<iostream>
using namespace std;


void generateP(int n,int close,int open,string s,vector<string> &ans){
    if(close==n && open==n){
        ans.push_back(s);
    }
     
    if(open<n)
       generateP(n,close,open+1,s+"{",ans);

   if(close<open)
      generateP(n,close+1,open,s+"}",ans); 


}

int main(){
  
      vector<string> ans;

      int n;
      cin>>n;cout<<endl;
      generateP(n,0,0,"",ans);
      for(auto it: ans)
          cout<<it<<endl;


    return 0;
} 