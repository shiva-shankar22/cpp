#include<vector>
#include<iostream>
using namespace std;
void setZero(int i,int j,vector<vector<int>> &mat,int n,int m){
    
    for(int k=0;k<n;k++)
        mat[k][j]=0;
    for(int k=0;k<m;k++)
        mat[i][k]=0;
    
}


void solve(vector<vector<int>> &mat){

    int n=mat.size();
    int m=mat[0].size();
     vector<pair<int,int>> ls;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
           if(mat[i][j]==0)
               ls.push_back({i,j});
    }

   for(auto &it:ls)
       setZero(it.first,it.second,mat,n,m);

    for(auto &it: mat){
        for(auto &i: it)
            cout<<i<<" ";
            cout<<endl;
    }

}


int main(){
   

   vector<vector<int>> mat={
                            {0,1,3,},
                             {1,2,3},
                             {2,0,1}    };

    solve(mat);                            

}