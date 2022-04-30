#include<bits/stdc++.h>
using namespace std;


bool isValid(vector<int> &t,vector<int> &interval){
      bool fg=false;
      if(t[0]==interval[0]){
           t[1]=max(t[1],interval[1]);
           fg=true;
      }

      else if(interval[1]<=t[1]){
           t[0]=min(t[0],interval[0]);
         t[1]=max(t[1],interval[1]);  
         fg=true;
      }

    //  cout<<" d in valid "<<t[0]<<" "<<t[1]<<endl;

      return fg;
}

vector<vector<int>> merge(vector<vector<int>> &intervals){
    vector<vector<int>> ans; vector<int> t(2);
    int n=intervals.size();
    if(n==0)return ans;
     
     sort(intervals.begin(),intervals.end());

    // for(auto &it : intervals) 
      //  cout<<it[0]<<"  "<<it[1]<<endl;
     
     t=intervals[0];
     for(int i=1;i<n;i++){          
     
      if(t[0]==intervals[i][0]){
           t[1]=max(t[1],intervals[i][1]);
               
      }

      else if(intervals[i][0]<=t[1]){
           t[0]=min(t[0],intervals[i][0]);
         t[1]=max(t[1],intervals[i][1]);  
     
      }

      else {
           ans.push_back(t);
           t=intervals[i];
      }

     }
     ans.push_back(t);
}

int main(){
     vector<vector<int>> arr={{1,3},{2,6},{8,10},{15,18}},ans;
   
     ans=merge(arr);
     for(auto &it : ans) 
        cout<<it[0]<<"  "<<it[1]<<endl;
}