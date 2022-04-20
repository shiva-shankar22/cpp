#include<bits/stdc++.h>
using namespace std;


void heapify(int ar[],int n,int i){
    int lar=i;

    int l =2*1+1,r=2*i+2;

    if(l< n && ar[l]>lar)lar=l;
    if(r<n && ar[r]> lar)lar=r;

    if(lar!=i){
        swap(ar[lar],ar[i]);
        heapify(ar,n,lar);
    }
}


int main(){

      int ar[]={9,0,1,0,7,6,5,2,5,8};
  int n=10;
      
      for(int i=n/2-1;i>=0;i--)heapify(ar,n,i);
      

      for(auto &it : ar)cout<<it<<" ";

    return 0;
}