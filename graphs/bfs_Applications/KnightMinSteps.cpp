#include<bits/stdc++.h>
using  namespace std;

struct node{
  int x, y,val;
  node(int _x,int _y,int _val){
      x=_x;
      y=_y;
      val=_val;
  }
};

bool isValid(node temp,vector<vector<bool>> &vis,int n,int m){
         int i=temp.x;
         int j=temp.y;
         int N=n;
         if (i >= 1 && i <= N && j >= 1 && j <= N && !(vis[i][j]))
        return true;

        return false;
}


int solve(int N,int ii,int ij,int ti,int tj){
         int ans=0;
         queue<node> q;
         int n=N+1,m=N+1;
         vector<vector<bool>> vis(n,vector<bool>(m,false));
         q.push( node(ii,ij,0));
         
       int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
        vis[ii][ij]=true;
         while(!q.empty()){
             node temp=q.front();
             q.pop();
             if(temp.x==ti && temp.y==tj)return temp.val;
             
             for(int i=0;i<8;i++){
                 int x=temp.x,y=temp.y,val=temp.val;
                 node t= node(x+dx[i],y+dy[i],val+1);
                 if(isValid(t,vis,n,m) ){
                    q.push(t);
                    vis[x+dx[i]][y+dy[i]]=true;
                 }
             }

         }

         return -1;
}


int main(){
      
     // vector<vector<int>> arr={{0}};

      cout<<endl<<solve(30,1,1,30,30);
}