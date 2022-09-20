#include<bits/stdc++.h>
using namespace std;

void heapify(int ar[],int n,int i){
    int lar =i;

    int l= 2 *i+1;
    int r =2* i+2;
    
    if( l< n && ar[lar] < ar[l])lar=l;
    if( r< n && ar[lar] < ar[r])lar=r;
     
     if(lar !=i){
        swap(ar[lar],ar[i]);
        heapify(ar,n,lar);
     }

 }

 int main(){
    int ar[]={9,0,1,0,7,6,5,2,5,8};
     int n=10;
    for(int i=n/2-1;i>=0;i--)
       heapify(ar,n,i);
    
    for(int i=n-1;i>0;i--){
        swap(ar[i],ar[0]);
        heapify(ar,i,0);
    }

    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
 }