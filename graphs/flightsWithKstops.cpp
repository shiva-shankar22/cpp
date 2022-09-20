#include<bits/stdc++.h>
using namespace std;



int solve(map<int,vector<pair<int,int>>> &adj,int des,int src,int k,int n){
    


//         cout<<"printing adjacency"<<endl;

//         for(auto it :adj){
           
//            cout<<it.first<<" ->";
//            int x=it.first;

//            for(auto i: adj[x]){
//                cout<<i.first<<","<<i.second<<"  ";
//            }
//            cout<<endl;
//         }

// return 0;


    vector<int> dis(n+1,1e8),stops(n+1,1e8);
      
      priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

      pq.push({0,{-1,src}});
      dis[src]=0,stops[src]=-1;
      while(!pq.empty()){
           
           auto cur =pq.top();
           pq.pop();
           
           int curStops=cur.second.second;
           int curDis=cur.first;
           int curNode=cur.second.first;
           
           if(curNode==des)return curDis;

           if(curStops>=k)continue;
            
           
           for(auto it : adj[curNode]){
               
               int wt = it.second, node = it.first;
               if(dis[node] > dis[curNode]+ wt){
                  dis[node]= dis[curNode]+wt;
                  stops[node]=stops[curNode]+1;
                  pq.push( { dis[node],{ stops[node] ,node } }  );

                  cout<<curNode<<"->"<<node<<"pushed 1"<<endl;

                // pq.push( { dis[node],{ node,stops[node] } }  );
               }

               else if((stops[node] > stops[curNode] +1)  || (stops[curNode] +1 < k && dis[curNode] +wt < dis[node] )  ){
                  dis[node]= dis[curNode]+wt;
                  stops[node]=stops[curNode]+1;
                  pq.push( { dis[node],{ stops[node] ,node } }  );
                  //  pq.push( { dis[node],{ node,stops[node] } }  );

                    cout<<curNode<<"->"<<node<<"pushed 2"<<endl;
               }
                
           }
 

      }  

             
            for(int i=0;i<=n;i++) 
                  cout<<i<<"->"<<dis[i]<<",";
            
            cout<<endl;
            
            for(int i=0;i<=n;i++) 
                  cout<<i<<"->"<<stops[i]<<",";

            //       cout<<endl;
             /*
               3 3 0 2 1 
0 1 100 1 2 100 0 2 500 
            */
            

      return  -1 ;

}



void solve(){
     int n,m,k,des,src;
     
         
   //      cout<<" n  m src des k"<<endl;
         cin>>n>>m>>src>>des>>k;

      map<int,vector<pair<int,int>>> mp;

      for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        mp[x].push_back({y,wt});
      }

        

    


     cout<<solve(mp,des,src,k,n);

}




int main(){

    // vector<tuple<int,int,int>> a;
      
      //n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], k src = 0, dst = 3, k = 1
     
      //: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1 Output: 200
      //
    // for(int i=0;i<5;i++)
    //    a.push_back({i,2*i+1,2*i+2});

    // for( tuple<int,int,int> [par, ll, rr] : a)
    //          cout<<par<<" " <<ll<<" "<<rr<<endl;   

   solve();
}