#include<bits/stdc++.h>
using namespace std;


vector<int> findDataLocatoins(vector<int> &ar,vector<int> &moveFrom,vector<int> &moveTo){
    
    int m=moveFrom.size(),n=ar.size();
    map<int,int> mp;
    
     for(int i=0;i<m;i++)
         mp[moveFrom[i]]=moveTo[i];
        
   int t=m;
    
   bool fg=true;

   int lm=-1;
    int fnd=0;
          for(int i=0;i<n;i++){
              if(mp[ar[i]]){
                m--;
                ar[i]=mp[ar[i]];
                lm=i;
                fnd=1;
                if(m==0){
                    sort(ar.begin(),ar.end());
                    return ar;
                }
              }
          }
      
   while(m>0){
     if(fnd) 
      for(int i=lm;i<n;i++){
           if(mp[ar[i]]){
                m--;
                ar[i]=mp[ar[i]];
                lm=i;
                fnd=1;
                if(m==0){
                    sort(ar.begin(),ar.end());
                    return ar;
                }
              }
      }
    else{
          for(int i=0;i<n;i++){
            if(mp[ar[i]]){
                m--;
                ar[i]=mp[ar[i]];
                lm=i;
                fnd=1;
                if(m==0){
                    sort(ar.begin(),ar.end());
                    return ar;
                }
              }
          }
    }

   }

   return ar;
}




int main(){

    int n,m;
    cin>>n>>m;

    vector<int> ar(n),moveFrom(m),moveTo(m);

    for(int &i:ar)cin>>i;
    for(int &i:moveFrom)cin>>i;
    for(int &i : moveTo)cin>>i;   
     
     map<int,int>mp;

    

}