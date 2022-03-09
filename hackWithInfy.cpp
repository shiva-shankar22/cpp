#include<bits/stdc++.h>
using namespace std;

vector<int> copyVec(vector<int> &arr,int idx,int x,int y){
    int n=arr.size();
    vector<int> temp;

    for(int i=0;i<n;i++){
        if(i==idx){
            temp.push_back(x);
            temp.push_back(y);
        }
        else temp.push_back(arr[i]);
    }

    return temp;
}

bool isNon(vector<int> &arr,int n,int &idx){
    bool fg=true;int i;
    for( i=0;i<n-1;i++){
         if(arr[i+1]>=arr[i])continue;
         else {fg=false; break;}
     }
     if(i==n && fg)idx=-1;
     idx=i;
 
     return fg;
}


int solve(vector<int> &arr){
     int idx=-1,lidx=-1;
    if(isNon(arr,arr.size(),idx))return 0;
     vector<int> temp;
    for(int i=arr[idx]-1;i>=1;i--){
        for(int j=arr[idx]-1;j>=1;j--){
            if(i+j==arr[idx]){
                if(isNon(arr,arr.size(),lidx))  
            }
        }
    }

    return 0;
}


int main(){


}