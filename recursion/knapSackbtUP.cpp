#include<bits/stdc++.h>
using namespace std;

int knapSack(int ar[],int val[],int i,int n,int W){
    if(n==i)return 0;
    if(W<=0)return 0;
    
  if(W-ar[i]>=0)
   return max(knapSack(ar,val,i+1,n,W-ar[i])+val[i],knapSack(ar,val,i+1,n,W));

  else
     return  knapSack(ar,val,i+1,n,W);
}


int main(){

  int ar[]={1,2,3,4};
  int val[]={5,2,8,1};
 
 cout<<endl<<knapSack(ar,val,0,4,5)<<endl;

    return 0;
}