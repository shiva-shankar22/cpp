#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node {
    int x, y, val;
    Node(int _x,int _y,int _val){
        x=_x;
        y=_y;
        val=_val;
    }
};

bool isValid(int i,int j,vector<vector<int>> vis,vector<string> str,Node node,int m,int n){


    //cout<<"hello"<<endl;
   if((i<0||i>=n)||(j<0 || j>=m) )
      return false;
   if(vis[i][j])return false;
   
   int node_x=node.x;
   int node_y=node.y;
     
   // cout<<"hello"<<endl;
   if(str[node_x][node_y]!=str[i][j])
      return false;
  
   // cout<<"hello"<<endl;
   return true;

}

int findCols(vector<string> str ,vector<vector<int>> &vis){
    int n =str.size();
    // cout<<"hello after n"<<endl;
    int m=str[0].length(); int ans=0;
    // cout<<"hello after m"<<endl;
    int prev=0;
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    
    queue<Node> q;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // cout<<"hello in j loop"<<endl;
             int flag=vis[i][j];
            if(vis[i][j]){
             // cout<<"hello  if checked"<<endl;
                continue;
            }
   

            else{   
              //   cout<<"hello"<<endl;
                vis[i][j]=true;
                q.push(Node(i,j,++prev));
                while(!q.empty()){
                    Node node=q.front(); q.pop();
                    int node_x=node.x,node_y=node.y;
                //     cout<<"hello"<<endl;
                    for(int k=0;k<4;k++){
                         if(isValid(node_x+dx[k],node_y+dy[k],vis,str,node,m,n)){ 
                             q.push(Node(node_x+dx[k],node_y+dy[k],node.val)); //cout<<"hello"<<endl;
                             vis[node_x+dx[k]][node_y+dy[k]]=1;
                         }
                    }                
                }
            }
        }
    }

  return ans=prev;
}

int intiColorfill(vector<string> &str){
      int n=str.size();
      int m=str[0].length();
    vector<vector<int>> vis(n,vector<int>(m,0));
    return findCols(str,vis);
}

int main(){
  
  int n;
  cin>>n;

   vector<string> str(n);

  for(auto &it :str)
     cin>>it;

   cout<<endl<<intiColorfill(str)<<endl;
    return 0;
}