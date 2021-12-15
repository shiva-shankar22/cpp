#include<iostream>
#include<vector>
using namespace std;

void ducthNationalFlag(vector<int> &ar){
    int high=ar.size()-1;
    int mid=0,low=0;
  
   while(mid<high){
       if(ar[mid]==1)mid++;
      
       if(ar[mid]==0){
           swap(ar[mid],ar[low]);
           low++;
           mid++;

       }

       if(ar[mid]==2){
           swap(ar[mid],ar[high]);
           high--;
       }



   }


}

int main(){
   
     int n;
     cin>>n;
      
      vector<int> ar(n);

     for(auto &it :ar)
       cin>>it;

       ducthNationalFlag(ar);

       for(auto &it : ar)
          cout<<it<<" ";

    return 0;
}