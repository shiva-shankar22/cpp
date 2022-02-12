#include<iostream>
#include<queue>
#include<vector>

using namespace std;

struct Node{
    int x,y;
    Node(){}
    Node(int _x,int _y){
        x=_x; y=_y;
    }
};

bool isValid(vector<vector<int>> &ar,Node *node,int m,int n,vector<vector<bool>> &vis){
    int i=node->x,j=node->y;
    if(i<0 || j<0 || i>=n || j>=m ||vis[i][j])return false;

   if(ar[i][j]!=1)return false;
    return true;
}


int solve(vector<vector<int>> &ar){
    int n=ar.size(),m=ar[0].size();
   vector<vector<bool>> vis(n,vector<bool>(m,false));
     
  queue<Node *>q;
  int cnt=0;
 
  int dx[]={1,0,-1,0};
  int dy[]={0,1,0,-1};
  
       
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
                
                  if(ar[i][j]==0 || vis[i][j])continue;
                  
                  else{
                       cnt++;
                      vis[i][j]=true;

                      Node *node=new Node(i,j);

                      q.push(node);

                      while(!q.empty()){
                          int size=q.size();
                          Node *temp=q.front();
                          q.pop();

                          for(int k=0;k<4;k++){
                                Node *tt=new Node(temp->x+dx[k],temp->y+dy[k]);
                                if(isValid(ar,tt,m,n,vis)){ 
                                     q.push(tt);
                                     vis[tt->x][tt->y]=true;
                                }
                          }
                          
                      }
                     
                  }

           }
       }
 
 
    return cnt;
}

int main(){
    int n,m;
 //   cin>>n>>m;
   
  // vector<vector<int>> arr(n,vector<int> (m));
  vector<vector<int>> arr{
                          {1, 1 ,0, 0}
                         ,{0, 1 ,0 ,0}
                         ,{0 ,0 ,1 ,0},
                          {1 ,0, 1, 0}
                          
                          };
//  for(auto &it: arr)
 //    for(auto &i: it)
 //        cin>>i;
 
 int cnt=0;

  cnt=solve(arr);
  cout<<cnt<<endl;

  return 0;
}