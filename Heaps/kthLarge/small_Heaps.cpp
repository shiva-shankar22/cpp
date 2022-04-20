#include<bits/stdc++.h>

using namespace std;

void heapify(int  v[] ,int n,int i){
    
    
     int l=2*i+1;
     int r=2*i+2;
     int small=i;
     if(l<n && v[l]>v[small])small=l;
     
     if(r<n && v[r]>v[small])small=r;
     
     if(small!=i){
         swap(v[small],v[i]);
         heapify(v,n,small);
     }
}

int main()
{
     int v[]={5,3,2,4,6,7,1};
    
    
   int n=7;
   int k=4;
    
    for(int i=n/2-1;i>=0;i--)heapify(v,n,i);//logN
    
    
    for(int i=n-1,cnt=0;cnt<k;i--,cnt++){
        swap(v[0],v[i]);
        heapify(v,i,0);
    }
   
   for(auto &it:v)cout<<it<<" ";
    
    return 0;
}