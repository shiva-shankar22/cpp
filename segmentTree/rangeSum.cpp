#include<bits/stdc++.h>
using namespace std;

class SG{

    public:
    vector<int> sg;
   public :
    SG(int n){
         sg.resize(4 *n);
    }

  void build(int idx,int low,int high,int ar[]){
      if(low==high){
          sg[idx]=ar[low];
          return ;

      }
     int mid=  (low+high) >> 1;
     build(2*idx+1,low,mid,ar); 
     build(2*idx+2,mid+1,high,ar);
     sg[idx]= sg[2*idx+1]+sg[2*idx+2];
  }

  int query(int idx,int low,int high,int l,int r){
       //no overlap
       // l r  low high  or  low high  l  r

       if(low > r || l> high) return 0;

      //complete overlap
      // l low   high  r   or 
      //
      if(low >=l  && high <=r)return sg[idx];



      //partial overlap
      else{
         int mid= (low+ high ) >>1;
         int left = query(2*idx+1,low,mid,l,r);
         int right = query(2*idx+2,mid+1,high,l,r);
         return  left+right;
      }


  }

};




int main(){

      int n;
       cin>> n;
       int ar[n];
       for(int i=0;i<n;i++) cin>>ar[i];

       SG st(n);
       st.build(0,0,n-1,ar);
     
    //  for(int i: st.sg)
    //     cout<<i<<" "<<endl;
        
       int q; 
        cin>>q;
        while(q--){
             int l,r;
             cin>>l>>r;

             cout<<st.query(0,0,n-1,l,r)<<endl;
        }
}


