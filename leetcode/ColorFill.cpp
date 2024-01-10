#include<bits/stdc++.h>
using namespace std;


struct node{
    int x,y;
    char ch='c';
    node(int _x,int _y,char c){
        x=_x;
        y=_y;
        ch=c;
    }
};

int strokesRequired(vector<string> &picture){
    int ans=0;
    queue<node> q;
    int n=picture.size(),m=picture[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    int dx[]= {0,0,1,-1};
    int dy[]= {-1,1,0,0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(vis[i][j]==0 && picture[i][j]!='*'){
                ans++;
                vis[i][j]=1;

                q.push(node(i,j,picture[i][j]));

                

                 while(!q.empty()){
                       node t=q.front();
                       q.pop();

                       for(int d=0;d<4;d++){
                           
                           int nx= t.x + dx[d] , ny= t.y + dy[d];
                           if(nx >=0 && ny>=0 && nx<n && ny<m && t.ch == picture[nx][ny]){
                               vis[nx][ny]=1;
                               q.push(node(nx,ny,picture[nx][ny]));
                               picture[nx][ny]='*';
                           }
                           
                       }

                }

             }
        }
    }

    return ans;
}


int main(){
    
    // List<Integer
    
    vector<string> arr= {"bbba","abba","acaa","aaac"};

    cout<<strokesRequired(arr)<<endl;
    return 0;
}
