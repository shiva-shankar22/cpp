#include<bits/stdc++.h>
using namespace std;

bool comp(int x,int y){

   int xc=__popcount(x);
   int yc=__popcount(y);

   if(xc==yc)return  x>y;
   
   else return xc>yc;

}


int main(){

    int arr[]={5,2,3,9,4,5,7,15,32};
  int n=9;
    sort(arr,arr+n,comp);
  
  for(auto &it :arr)
       cout<<it<<" ";
       cout<<endl;
}