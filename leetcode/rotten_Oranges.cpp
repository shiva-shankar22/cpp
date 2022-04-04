#include<vector>
#include<queue>
#include<iostream>
using namespace std;
//min number of days to rotten all oranges in grid 
// 0 represent empty
// 1 represent orange
// -1 represent rotten orange

struct node{
   int x, y;
   node(int i,int j ){x=i,y=j;}
};

bool isSafe(vector<vector<int>> &grid,struct node temp,int n,int m,vector<vector<bool>> &vis){
   
   int i=temp.x,j=temp.y;
   if(i<0 || j<0 || i>=n || j>=m )return false;

   if(vis[i][j] || grid[i][j]==-1 || !grid[i][j])return false;

    return true;
}

int rottenOranges(vector<vector<int>> &grid){
   int n=grid.size(),m=grid[0].size();

   vector<vector<bool>> vis(n,vector<bool>(m,false));
    queue<node> q;int notrotten=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
          if(grid[i][j]==-1)q.push(node(i,j));
          else if(grid[i][j]==1)notrotten++;
    int ans=0;
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    int days=0,cnt=0;
    if(!q.empty())days++;
    while(!q.empty()){
        int k=q.size();
        cnt+=k;
        while(k--){
            
            node cur=q.front(); q.pop();
            for(int i=0;i<4;i++){
                node temp(cur.x+dx[i],cur.y+dy[i]);
                if(isSafe(grid,temp,n,m,vis)){
                    vis[temp.x][temp.y]=true;
                    grid[temp.x][temp.y]=-1;
                    q.push(temp);
                }
            }

        }
       if(!q.empty())days++;
    }
   return (cnt==notrotten) ? days : -1;
}

int main(){
     int n,m;
     cin>>n>>m;
    vector<vector<int>> arr(n,vector<int> (m));
    
    for(auto &it :arr)
       for(auto &i :it)
           cin>>i;

     

    return 0;
}