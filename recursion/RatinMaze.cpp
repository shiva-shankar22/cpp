#include<iostream>
#include<vector>
using namespace std;


    vector<string> ans;
bool isSafe(int i,int j,vector<vector<int>> &grid ,int n, int m,vector<vector<bool>> &vis){
       if(grid[i][j]==0)return false;
           if(i<=-1 || j<=-1)
                 return false;
            if(i>=n || j>=m)
                 return false;
       if(vis[i][j])return false;
cout<<"return true for values "<<i<<"  "<<j<<endl;
  return true;
}

int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};
string str="DLRU";

void solve(vector<string> &ans,string ds,vector<vector<int>> &grid,int i,int j,int n,int m,vector<vector<bool>> &vis){
            if(i<=-1 || j<=-1){
                cout<<"lesser than n || m \n";
                return;
            }
             //   return;
            if(i>=n || j>=m){
                cout<<"greater than n || m \n";
                return;
            }
            if(i==n-1 && j==m-1){
                cout<<"answer"<<endl;
                ans.push_back(ds);
                cout<<ds<<endl;
                return;
            }

//  D  L R U

   for(int k=0;k<4;k++){
       if(isSafe(i+dx[k],j+dy[k],grid,n,m,vis)){
           cout<<"safe"<<endl;
           vis[i][j]=true;
           solve(ans,ds+str[k],grid,i+dx[k],j+dy[k],n,m,vis);
           vis[i][j]=false;
       }
   }    
 

}


void ratInMaze(vector<vector<int>> &grid,int i,int j,int n,int m){

    vector<vector<bool>> vis(n,vector<bool>(m,false) );
    solve(ans,"",grid,i,j,n,m,vis);

    cout<<"answer in solve"<<endl;
    for(auto &it : ans)
       cout<<it<<endl;
   cout<<"after "<<endl;
}


int main(){
    vector<vector<int>> grid={ 
                                {1,1,1,0,0},
                                {0,0,1,0,0},
                                {0,0,1,1,1}
                                  };

    ratInMaze(grid,0,0,3,5);
}