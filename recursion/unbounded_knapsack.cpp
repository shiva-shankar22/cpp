#include<iostream>
#include<climits>
using namespace std;

int  findMax(int ar[],int val[],int i,int S,int n){
    if(n==i||S==0)return 0;
    
    if(S-ar[i]>=0)
      return findMax(ar,val,i,S-ar[i],n)+val[i];
    else{
        return findMax(ar,val,i+1,S-ar[i],n);
    }

}

int main(){
    int W = 100;
    int val[] = {1, 30};
    int wt[] = { 1, 50};

    cout<<findMax(wt,val,0,W,3)<<endl;
}