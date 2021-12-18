#include<bits/stdc++.h>
using namespace std;

int knapSack(int ar[],int val[],int W,int n){
    if(n<0)return 0;
    if(W<=0)return 0;
    
    if(W-ar[n]>=0){
        return max(val[n]+knapSack(ar,val,W-ar[n],n-1),knapSack(ar,val,W,n-1));
    }
    else return knapSack(ar,val,W,n-1);
}


int main(){

  int ar[]={1,2,3,4};
  int val[]={5,2,8,1};
 
 cout<<endl<<knapSack(ar,val,5,3)<<endl;

    return 0;
}