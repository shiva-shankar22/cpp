#include<bits/stdc++.h>
using namespace std;


int merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        stack<pair<int,int>>st;
        
        st.push({intervals[0][0],intervals[0][1]});
        
        int i = 1;
        
        while( i < intervals.size() ){
            
             if( st.top().second >= intervals[i][0] ){
                     
                if(st.top().second < intervals[i][1]){
                              int s = st.top().first;
                              int e = intervals[i][1];
                              st.pop();
                              st.push({s,e});
                }   
                  
              }
              else{
          
                st.push({intervals[i][0],intervals[i][1]});
          
              }
                i++;  
             
       }
        
        vector<vector<int>>ans_ulta;
        
        while(st.empty() == false){
            ans_ulta.push_back({st.top().first,st.top().second});
            st.pop();
        }
        
        vector<vector<int>>ans;
        
        for(int i = ans_ulta.size() - 1 ; i >= 0 ; i--){
            ans.push_back(ans_ulta[i]);
        }
        
        return ans.size();        
}

struct node{
   int x,y,z;
   node(int i,int j,int k){
     x=i,y=j,k=z;
   }
};
bool operator<( const node &n1,const node &n2){
   
  if(n1.x==n2.x){
      if(n1.y==n2.y){
        return n1.z<n2.z;
      }
      return n1.y<n2.y;
  }
  return n1.x<n2.x;
}
int main(){
  
   map<node,int> mp;

   mp[node(1,2,3)]++;

   mp[node(1,3,3)]++;
   mp[node(4,3,4)]++;
   cout<<mp.size();

  // map<pair<int,pair<int,int>>> mp;
   
  //  mp[{1,{1,2}}]++;
  //  mp[{1,{1,2}}]++;
  //  cout<<mp.size()<<endl;
}