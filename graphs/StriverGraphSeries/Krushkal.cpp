#include<bits/stdc++.h>
using namespace std;


// struct node{
//     int x,y,wt;
//     node(int x,int y,int wt){
//         this->x=x;
//         this->y=y;
//         this->wt=wt;
//     }
// };
class DSU{

  vector<int> parent,rank;
  public :
  int size;
     DSU(int n){
      size=n+1;
        parent.resize(n+1);
        rank.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            rank[i]=1;
        }
     }

  int findParent(int x){
       if(parent[x]==x)return x;

       return parent[x]=findParent(parent[x]);
  }

  void unionBySize(int x,int y){
      
      int x_parent= findParent(x);
      int y_parent=findParent(y);
      if(x_parent==y_parent)return;

    if(rank[x_parent]==rank[y_parent]){
        
        rank[x_parent]+=rank[y_parent];
        parent[y]=x_parent;
        parent[y_parent]=x_parent;

    }

    else if( rank[x_parent] > rank[y_parent]){
           
        rank[x_parent]+=rank[y_parent];
        parent[y]=x_parent;
        parent[y_parent]=x_parent;
    }

    else{
            rank[y_parent]+=rank[x_parent];
            parent[x]=parent[x_parent]=parent[y_parent];
    }

  } 


  void print(){
     
     cout<<"printing parent"<<endl;
     for(int i=0;i<size;i++)
         cout<<i<<" -> "<<parent[i]<<" ,";
     
     cout<<endl<<"printing sizes"<<endl;
     for(int i=0;i<size;i++)
         cout<<i<<" -> "<<rank[i]<<" ,";
  }

};

// bool comp(node &ar,node ar2){
//        return ar.wt  <ar2.wt;
// }

bool comp(vector<int> &ar,vector<int> &ar2){
    return ar[2]<ar2[2];
}


int krushkal(vector<vector<int>> edges,int n){

  sort(edges.begin(),edges.end(),comp);

//   cout<<"after sort"<<endl;
//   for(auto &it :edges)
//        cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;

  DSU dsu(n);
  int cst=0;
  vector<vector<int>> ansEdges;
  for(auto it : edges){
        
        int x =it[0];
        int y=it[1];
    
        if(dsu.findParent(x)!=dsu.findParent(y)){
            dsu.unionBySize(x,y);
            ansEdges.push_back({x,y,it[2]});
            cst+=it[2];
        }
  }       
      cout<<"Edges part of MST"<<endl;
      for(auto &it :ansEdges)
          cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;

    cout<<cst<<endl;
}


int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> edges;

    for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        edges.push_back({x,y,wt});
    }
     

     //edges.push_back(node(x,y,wt));
    
    
   krushkal(edges,n);
  

}
/* 
1 5 4
0 2 5
3 4 7
2 4 8
0 5 9
0 1 1
1 3 2
3 2 3
1 2 3
 

*/