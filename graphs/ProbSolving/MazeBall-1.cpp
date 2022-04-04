#include<bits/stdc++.h>
using namespace std;

/*
  Problem is about finding a ball can reach to given
  destination coordinates 
  the ball will only stop if it hit to a wall 
  the wall are represented by 1 
  and all the corners are considered as walls 
*/
struct node{
    int x,y;
    node(int i,int j){x=i,y=j;}
};
bool isSafe(vector<vector<int>> &grid,struct node temp,int n,int m,vector<vector<bool>> &vis){
    int i=temp.x,j=temp.y;
    if(i<0 || j<0 || i>=n ||j>=m)return false;
    if(vis[i][j] || grid[i][j])return false;

    return true;
}

bool isPossible(vector<vector<int>> &grid,vector<int> &src,vector<int> &des){
        int n=grid.size(),m=grid[0].size();
        queue<node> q;
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        vector<vector<bool>> vis(n,vector<bool> (m,false));
           int i=src[0],j=src[1];
                      q.push(node(src[0],src[1]));
                      vis[i][j]=true;
                      while(!q.empty()){
                          node cur=q.front();q.pop();

                          

                          for(int k=0;k<4;k++){
                            int x=cur.x,y=cur.y;
                            while(x<n && x>=0 && y<m && y>=0 && grid[x][y]!=1){
                                x+=dx[k];
                                y+=dy[k];
                            }
                            x-=dx[k],y-=dy[k];
                            node temp(x,y);
                            if(isSafe(grid,temp,n,m,vis)){
                                 q.push(temp);
                                 vis[x][y]=true;
                            }
                          }
                      }
                
            
        

        return vis[des[0]][des[1]];
}

int main(){



    return 0;
}