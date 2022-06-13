
#incldue<bits/stdc++.h>
using namespace std;

 struct node{
    int i,j,val;
    node(int x,int y,int v){
        x=i,j=y,v=val;
    }
};
    bool isValid(int i,int j,int n,int m, vector<vector<int>> &grid,vector<vector<bool>> &vis){
    
    if(i<0|| j<0 || i>=n|| j>=m)return false;
    
    if(grid[i][j]==0 || vis[i][j])return false;
    
    return true;
    
}
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        queue<node> que;
   // node t;
    int i,j;
    int n=grid.size(),m=grid[0].size();
    for( i=0;i<n;i++)
       for( j=0;j<m;j++)
          if(grid[i][j]==1){ 
            // t(i,j,1);  
             break; 
          }
          
    int dx[]={1,1,0,0},dy[]={0,0,1,-1};
    
    vector<vector<bool>> vis(n,vector<bool> (m,false));
    
    que.push(node(i,j,1));
    
    while(!que.empty()){
        node cur=que.front();
        que.pop();
        
        if(cur.val==2)return true;
        
        for(int k=0;k<4;k++){
            int i=dx[k]+cur.i,j=cur.j+dy[k];
            if(isValid(i,j,n,m,grid,vis))
               que.push(node(i,j,grid[i][j]));
        }
    }
    
    return false;
    }