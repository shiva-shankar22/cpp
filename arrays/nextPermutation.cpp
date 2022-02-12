#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> npermute(vector<int> arr){
       int n=arr.size();
       int idx1=-1,idx2=-1;
       for(int i=n-2;i>=0;i--){
           if(arr[i+1]>arr[i]){ //1 3 5 4 2
               
               idx1=i;break;
           }
       }

       for(int i=n-1;i>=0;i--)
            if(arr[i]>arr[idx1]){
                idx2=i;
                break;
            }

    swap(arr[idx1],arr[idx2]);

    reverse(arr.begin()+idx1,arr.end());
    return arr;
                 
}

int main(){
      
      vector<int> arr={1,2,3};

      npermute(arr);

      for(auto &it:arr)
         cout<<it<<" ";
 
        cout<<endl;
     
     prev_permutation(arr.begin(),arr.end());
     
       
    next_permutation(arr.begin(),arr.end());
    next_permutation(arr.begin(),arr.end());
      for(auto &it:arr)
         cout<<it<<" ";
 
        cout<<endl;
    

}