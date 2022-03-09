#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct node{
    int x,y;

    node(int i,int j){
        x=i;
        y=j;
    }
};

bool isSafe(vector<vector<int>> &grid,vector<vector<bool>> &vis,struct node ele,int n,int m){
   if(ele.x>=n||ele.y>=m || ele.x<0 || ele.y<0)return false;
   if(   grid[ele.x][ele.y]==0 || vis[ele.x][ele.y] )return false;
   
  return true;
}

int countIslands(vector<vector<int>> &grid){
    int ans=0,n=grid.size(),m=grid[0].size(); 
    vector<vector<bool>> vis(n,vector<bool>(m,false));

    queue<node> q;
    int dx[]={-1,1,0,0};
    int dy[]={0,0,1,-1};
       
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j] || grid[i][j]==0){
               // cout<<" continue at "<<i<<" "<<j<<endl;
                continue;
                 
            }
            else{

                   vis[i][j]=true;
                   int cnt=1;
                   
                   q.push(node(i,j));

                   while(!q.empty()){
                       node cur_node=q.front();
                       q.pop();

                       for(int i=0;i<4;i++){
                           node temp=node(cur_node.x+dx[i],cur_node.y+dy[i]);

                           if(isSafe(grid,vis,temp,n,m)){ 
                               vis[temp.x][temp.y]=1;
                                q.push(temp);
                                 cnt++;
                                //cout<<"inserting node at"<<i<<" "<<j<<endl;
                           }
                       }

                   }
              ans=max(ans,cnt);
            }
        }
    }
 


    return ans;
}


int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> arr(n,vector<int>(m));

    for(auto &it:arr)
       for(auto &i :it)
             cin>>i;

    cout<<countIslands(arr);

    return 0;
}