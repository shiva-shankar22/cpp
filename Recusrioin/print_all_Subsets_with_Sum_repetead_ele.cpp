#include<bits/stdc++.h>
using namespace std;


void printSubsets(int ar[],int sum,int i,int n,vector<int> &v){
      if(i==n){
          if(sum==0){
              for(auto it: v)
                cout<<it<<" ";//wrong
                cout<<endl; return;
          }
          return;
      }
     
     

}


int main(){

   int ar[]={1,2,3};
    vector<int> v;
   printSubsets(ar,8,0,3,v);

    return 0;
}