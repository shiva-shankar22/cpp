#include<bits/stdc++.h>
using namespace std;

class ST{
   public :
    vector<int> seg;

    ST(int n){
      seg.resize(4 *n);
    }


  void build(int idx,int low,int high,vector<int> &ar){
     if(low==high){
        seg[idx]=ar[low];
        return ;
     }
     int mid= (low+high) >> 1;
     build(2*idx+1,low,mid,ar);
     build(2*idx+2,mid+1,high,ar);
     seg[idx]= min(seg[2*idx+1],seg[2*idx+2]);
  }  

  int query(int idx,int low,int high,int l,int r){
       //no over lap
       // l r low high  or low high l r
       if( low > r || l > high)return 1e8;

       // complete overlap
       //  l low high r
       if( low >=l && r>=high)return seg[idx];

       int mid = (low+high) >> 1;
       int left = query(2*idx+1,low,mid,l,r);
       int right= query(2*idx+2,mid+1,high,l,r);

       return min(left,right); 
  }
  

};

int main(){
    int n=5;
    vector<int> ar={3,2,1,7,-1};
    ST st(n);

    st.build(0,0,n-1,ar);

    cout<<st.query(0,0,n-1,1,3)<<endl;
    cout<<st.query(0,0,n-1,1,4)<<endl;
    
}