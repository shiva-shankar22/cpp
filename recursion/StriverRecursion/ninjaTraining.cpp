#include<iostream>
#include<vector>

using namespace std;

int solve(vector<vector<int>> &arr,int day,int taken){
      int maxi=0;
      if(day==0){ 
         for(int i=0;i<3;i++){
            if(i!=taken) 
             maxi=max(maxi,arr[0][i]);
         }
         return maxi;
      }
      int ans=0;
      for(int i=0;i<3;i++){
          if(i!=taken){
             ans=max(ans,arr[day][i]+solve(arr,day-1,i));
          }
      }

      return ans;

}

int ninjaTraining(vector<vector<int>> &arr){
   int n=arr.size();
    return solve(arr,n-1,3);

}


int main(){
   
   int n;
   cin>>n;
   vector<vector<int>> arr(n,vector<int> (3));
      
      for(auto &it:arr){
          for(auto &i:it)
             cin>>i;
      }
      



    return 0;
}