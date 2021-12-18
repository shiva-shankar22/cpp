#include<bits/stdc++.h>
using namespace std;

//no of ways to reach a point in m*n matrix

int noofWays(int n,int m ,int j,int i){
     if(i==n-1&&j==m-1)return 1;
    if(i>n ||j>m)return 0;
     return noofWays(n,m,i+1,j)+noofWays(n,m,i,j+1);


}

//print possible paths  with R D

void printPath(int n,int m ,int i,int j,string s){
    if(i==n-1&&j==m-1){
       cout<<s<<endl;
       return ;
    }
    if(i>n ||j>m)return ;

    printPath(n,m,i,j+1,s+'R');
      printPath(n,m,i+1,j,s+"D");
      
}
//print all possible paths in lexographicall order

void printPathL(int n,int m ,int i,int j,string s){
    if(i==n-1&&j==m-1){
       cout<<s<<endl;
       return ;
    }
    if(i>n ||j>m)return ;

   
      printPathL(n,m,i+1,j,s+"D");
       printPathL(n,m,i,j+1,s+'R');
}


/*

Problem Statement :- 
                    Given a matrix m*n  you are allowed to move R L U D  now  find no. of ways to reach end of matrix  
                    "arr[n][m]". ** without forming a cycle

*/

int cntPaths(int n,int m ,int i,int j, vector<vector<int>> &v,int di[],int dj[]){
    if(i==n-1&& j==m-1)return 1;

    if( i>=n || j>=n || v[i][j]=0 || i<0 ||j<0)
           return 0;

    int cnt=0;
      v[i][j]=1;
    for(int x=0;x<4;x++){
       
    }

}



int main(){



    return 0;
}