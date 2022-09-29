#include<bits/stdc++.h>
using namespace std;

int mingroups(vector<int> ar,int k){
   int ans=1;
   sort(ar.begin(),ar.end());
   
   int n=ar.size();

   if(n==0)return 0;
  int start=0;
    for(int i=0;i<n;i++){
       if(ar[i]-ar[start] > k){
         start=i;
         ans++;
       }
    }
   
   return ans;
}




long getMaxAggregateTemp(vector<int> &ar){
     
     int n=ar.size();

      vector< long> lpre(n),rpre(n);

      lpre[0]=ar[0];
      rpre[n-1]=ar[n-1];
        
         long maxi=-1e9-4;

      for(int i=1,j=n-2;i<n;i++,j--){
          
          lpre[i]=lpre[i-1]+ar[i];
          rpre[j]=rpre[j+1]+ar[j];
      }

      for(int i=0;i<n;i++){
          
          maxi=max ( maxi , max(lpre[i],rpre[i]));
      }
      
      return  maxi;

}


int minimizeMemory(vector<int> &processes,int m){
   int n=processes.size();
   
   int cur=0;
   int acc=accumulate(processes.begin(),processes.end(),0);
    
   for(int i=0;i<m;i++)cur+=processes[i];

   int maxi=cur;

   for(int i=0,j=m;j<n;j++,i++){
        cur-=processes[i];
        cur+=processes[j];
        maxi=max(cur,maxi);
   }
    
    return (acc-maxi);
}


int findEarliestMonth(vector<int> &ar){
   int n=ar.size();
      vector< int> lpre(n),rpre(n);

      lpre[0]=ar[0];
      rpre[n-1]=ar[n-1];
        
         int mini=1e9;
         int idx=-1;
      for(int i=1,j=n-2;i<n;i++,j--){
          
          lpre[i]=lpre[i-1]+ar[i];
          rpre[j]=rpre[j+1]+ar[j];
      }
       
      for(int i=0;i<n;i++){
          
          int lval= lpre[i]/i+1;
          int rval= rpre[i]/ (n-i-1);
          if(mini > abs(lval-rval)){
            idx=i;
            mini=abs(lval-rval);
          }
      }
    
    return idx+1;
}

long getMincost(vector<int> &ar,int k){
   int n=ar.size();
   if(n==k)return 0;

   long ans=0;

   sort(ar.begin(),ar.end());

   for(int i=1;i<=k&&n<k;i++){
       if( ! binary_search(ar.begin(),ar.end(),i)){
         ans+=i;
         n++;
       }
   }
   return ans;
}


int main(){
       
      vector<int> ar={10,4,8,1}; 
   cout<<findEarliestMonth(ar)<<endl;
}