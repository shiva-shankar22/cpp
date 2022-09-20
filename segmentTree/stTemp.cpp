#include<bits/stdc++.h>
using namespace std;

class SGtree{

    public:
  vector<int> seg;
  public:  
   SGtree(int n){
       seg.resize(4*n+1);
     //seg=new int [ 4 *n+1];
   }

  void build(int idx,int low,int high,int arr[]){
      if(low==high){
          seg[idx]=arr[low];
          return ;
      }

    int mid=(low+high)>>1;
    build(2 * idx+1 , low,mid,arr);
    build(2 * idx+2 ,mid+1,high,arr);
    seg[idx]=min(seg[idx*2 +1],seg[2*idx+2]);
  }

 int query(int idx,int low,int high,int l,int r){
     //No overlap
     //l r low high or low high l r
     if(r < low || l>high)return 1e8;
     
     //full overlap
     //[ l  low high r]
  
    if(low>=l && high<=r)return seg[idx];
     
     //partial overlap
     
     int mid=(low+high)>>1;

     int left=query(2 * idx +1 ,low,mid,l,r);
     int right=query( 2 * idx+ 2,mid+1,high,l,r);

  return seg[idx]=min(left,right);
 }

 void update(int idx,int low,int high,int i,int val){
     if(low==high){
         seg[idx]=val;
         return ;
     }
     int mid=(low+high)>>1;

     if(i<=mid)
       update(2 * idx +1 ,low,mid,i,val);
     else 
        update(2 * i+2 , mid+1,high,i,val);
    seg[idx]=min(seg[idx*2 +1],seg[2*idx+2]);
 }

 void print(){
     for(auto &it: seg) 
        cout<<it<<" ";
        cout<<endl;
 } 

};

int main(){

    int n;
    cin >> n;
    int ar[n];
    for(auto &it : ar)cin>>it;
    
    SGtree st(n);
    st.build(0,0,n-1,ar);

   st.print();
    int q ;
    cin>>q;

    while( q--){
        int l,r;
        cin>>l>>r;
       cout << st.query(0,0,n-1,l,r)<<endl;
    }
    
   // st.print();
}

