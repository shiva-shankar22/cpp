#include<bits/stdc++.h>
using namespace std;


int solve(int i,int j){
    if(i==0 && j==0)return 1;
    
    if(i<0 || j<0)return 0;

    int left=solve(i-1,j);
    int right=solve(i,j-1);
  
  return (left+right);
}



int main(){

    cout<<solve(15,15)<<endl;

    return 0;

}
