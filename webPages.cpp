#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int x,int y){
    adj[x].push_back(y);
}

int findDistance(vector<int> adj[],int n,int src,int des){
    vector<int>dis(n+1,INT_MAX-4),vis(n+1,0);

    queue<int> q;
    q.push(src);
    vis[src]=1;dis[src]=0;

    while(!q.empty()){
       int cur=q.front();q.pop();

       for(auto &it :adj[cur]){
           if(!vis[it]){
               vis[it]=1;
               dis[it]=dis[cur]+1;
               q.push(it);
           }
           else if(dis[it]>dis[cur]+1){
             dis[it]=dis[cur]+1;
           }
       }
    }


    return dis[des];
}
void solve(vector<int> adj[],string &str,int i){
     
     string s="";
     int n=str.length();
     
     for(int i=0;i<n;i++){
         if(str[i]==' '){
             adj[i].push_back(stoi(s));
             s="";
         }
         else s+=str[i];
     }
     if(s!="")
     adj[i].push_back(stoi(s));
}
int main(){
    int n,m;
    cin>>n;
    vector<string> arr(n);
    
    vector<int> adj[n+1];
     char ch;cin>>ch;int fg=0;
     string s="";

     getline(cin,s);
     arr[0]=ch+s;
     for(int i=1;i<n;i++){
         getline(cin,arr[i]);
     }
     
     for(int i=0;i<n;i++){
         solve(adj,arr[i],i+1);
     }

    int cur,des; cin>>cur>>des;

   int res=findDistance(adj,n,cur,des);

   if(res==INT_MAX-4)cout<<-1<<endl;
   else cout<<res<<endl;

}