#include<bits/stdc++.h>
using namespace std;

pair<int,int> printMax(int ar[],int i,int n){
        
        if(i==n)return pair<int,int>({INT_MIN,INT_MAX});
      
      pair<int,int> p= printMax(ar,i+1,n);

      if(p.first<ar[i])
          p.first=ar[i];
      
      if(p.second>ar[i])
         p.second=ar[i];

         return p;

}

int main(){

   int ar[]={1,2,3,4,5,6};

   pair<int,int> p= printMax(ar,0,6);


cout<<p.first<<" "<<p.second;

    return 0;
}