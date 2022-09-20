#include<bits/stdc++.h>
using namespace std;


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



int main(){

 
    int n,t;

    cin>>n>>t;

    DSU dsu(n);

    while(t--){
       int x,y;
       cin>>x>>y;
       dsu.unionBySize(x,y);
    }
    
    dsu.print();
}


