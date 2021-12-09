
#include<bits/stdc++.h>
using namespace std;

int findUtil(int ar[],int low,int high,int key){
   if(low<=high){
      int mid=((low+high)/2);

      if( (mid-1<=0) || (ar[mid]==ar[mid-1]) || (mid+1>=high and ar[mid]!=ar[mid-1])  and ar[mid]==key )
         return mid;

     else if(ar[mid]>key||ar[mid]==ar[mid-1])
        return findUtil(ar,low,mid,key);
      
      else if(ar[mid]<key||ar[mid]==ar[mid+1])
           return findUtil(ar,mid+1,high,key);
      else return -1;
   }

   return -1;
}

int findFirstOccurence(int ar[],int n,int key){
 
    return findUtil(ar,0,n,key);

}

int fun(int ar[],int n,int key){
   for(int i=0;i<n;i++)
      if(ar[i]==key)
        return i;
  return -1;
}

int main(){

   int ar[]={1,3,5,4,4,2,2,3,4,4,5,6,6,5,4,3,32,2,2,3,4,5,5,4,4,3,2,2,2,2,2,3,4,4,455,5,55,6,6};

   int n=sizeof(ar)/sizeof(ar[0]);

    sort(ar,ar+n);

    int f=fun( ar,n,1);

   int f1=findFirstOccurence(ar,n-1,1);

   cout<<f<<" "<<f1;

return 0;
}
