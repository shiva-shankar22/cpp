#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int minCost(vector<vector<int>> &mat,int i,int j,int n,int m){
       if(i==(n-1) && j==(m-1))return mat[i][j];
       
       if(i>=n||j>=m)return 10000000;

       return min(mat[i][j]+minCost(mat,i+1,j,n,m),
                              minCost(mat,i,j+1,n,m)+mat[i][j]);
}

int main(){
       
       int n,m;
       cin>>n>>m;

       vector<vector<int>> mat(n,vector<int> (m));

       for(auto &it : mat)
           for(auto &i :it)
                 cin>>i;
       
       cout<<endl<<minCost(mat,0,0,n,m)<<endl;

    return 0;
}