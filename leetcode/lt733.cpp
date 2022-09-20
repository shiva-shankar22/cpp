#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
  struct node{
    public :
      int i,j,val;
    
      node(int x,int y){
        i=x,j=y;
    }
};


    bool isSafe(int x,int y,int n,int m,vector<vector<bool>> &vis){
          
          if(x <0 || y<0 || y>=m || x>=n )return false;

          if(vis[x][y]==true )return false;
           
       return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        

        queue<node > q;
        int gcolor= image[sr][sc];
        q.push( node( sr,sc));
        
        int dx[]={0,0,-1,1};
        int dy[]={1,-1,0,0};
        int n=image.size(),m=image[0].size();
        vector<vector<bool>> vis(n,vector<bool> (m,false));
        while(!q.empty()){
            node cur= q.front(); q.pop();

             int i=cur.i,j=cur.j;
             for(int k=0;k<4;k++){
                  
                  int nx=dx[k]+i;
                  int ny=dy[k]+j;
                  
                 if(isSafe(nx,ny,n,m,vis) ){
                     vis[nx][ny]=true;
                     if(image[nx][ny]==gcolor) 
                      q.push(node(nx,ny));
                 }

             }
            
            image[i][j]=color;
        }
        return image;
    }
};


bool solve(int idx,vector<int> &ar){
         if(idx>=ar.size()-1)return true;
        
        cout<<idx<<" idx "<<endl;

        int val= ar[idx];
        if(val==0)return false;
        bool ans=false;
        for(int i=1;i<=val;i++){
             ans= max(ans,solve(idx+i,ar));
        }
        return ans;
 }
bool canJump(vector<int>& nums) {
      
        return solve(0,nums);
}


int main(){

   vector<int> ar={2,3,1,1,4};

   cout<<solve(0,ar)<<endl;   
    
}