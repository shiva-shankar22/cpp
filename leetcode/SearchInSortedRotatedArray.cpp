#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr,int n,int low,int high){
            int idx=-1;
            
       if(low<high){
            
            int mid=(high+low)/2;
            if((mid+1<=n-1 && arr[mid] >arr[mid+1]))
                 return mid;
            if((mid-1>=0 &&arr[mid]<arr[mid-1] )){
               //cout<< arr[mid]<<endl;  
                return mid-1;
            }
       
            idx=findPivot(arr,n,low,mid-1);
            if(idx!=-1)return idx;

            idx=findPivot(arr,n,mid+1,high);
            if(idx!=-1)return idx;

       }
  return idx;
}

int binarySearch(vector<int> &arr,int low,int high,int key){
    int ans=-1;
    if(low==high && arr[low]==key)return low;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){ans=mid;break;}

        else if(arr[mid]>key){
            high=mid-1;
        }
        else low=mid+1;        
   }
   return ans;
}

int findIndex(vector<int> &arr,int n,int key){
   
    int idx=-1;
    
    int pivot=findPivot(arr,n,0,n-1);

    idx=binarySearch(arr,0,pivot,key);
     
     cout<<"index pivot"<<pivot<<endl;
    
    if(pivot+1==n && arr[pivot]==key)return pivot;
    if(idx!=-1)return idx;
    return binarySearch(arr,pivot+1,n-1,key);

  // return idx;
}



int main(){

         int n;cin>>n;
         //= arr.size(); 
           
           vector<int> arr(n);
           for(auto &it :arr)cin>>it;
           int key;
           cin>>key;
        cout<<findIndex(arr,n,key)<<endl;
    return 0;
}