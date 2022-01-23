#include<iostream>
#include<vector>

using namespace std;

int findMaxProfit(vector<int> &ar){
    int n=ar.size();

    if(n==0)return 0;
    if(n==1)return ar[0];
    
    vector<int> v(n+1);

   v[0]=ar[0];
   
}