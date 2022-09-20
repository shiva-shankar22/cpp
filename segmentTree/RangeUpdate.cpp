#include<bits/stdc++.h>
using namespace std;


class SGR{
   public : 
          vector<int>  seg,lazy;
         SGR(int n){
             seg.resize(4 *n);
             lazy.resize(4*n);
         }
        
        void build(int idx,int low,int high,int ar[]){
            if(low==high){
                seg[idx]=ar[low];
                return;
            }
          
            int mid= (low+high)>>1;
            build(2*idx+1,low,mid,ar);
            build(2*idx+2,mid+1,high,ar);
            
            seg[idx]=seg[2*idx+1]+seg[2*idx+2];
        }     
        
        int query(int idx,int low,int high,int l,int r){
            if(lazy[idx]!=0){
                 seg[idx]+=lazy[idx];
                 
                 if(low!=high){
                     
                     lazy[2*idx+1]=lazy[idx];
                     lazy[2*idx+2]=lazy[idx];
                 }
                 lazy[idx]=0;
            }
            
            //l r low high or low high l r
            if(low > r || l>high)return 0;
            
            //complete overlap
           //l low high r
           if(low>=l && r>=high)return seg[idx];
           
           int mid=(low+high)>>1;
           int ll=query(2*idx+1,low,mid,l,r);
           int rr=query(2*idx+2,mid+1,high,l,r);
           
           return ll+rr;
        }
        
        void range_update(int idx,int low,int high,int l,int r,int val){
              if(lazy[idx]!=0){
                  
                  seg[idx]+=(high-low+1)*lazy[idx];
                  
                  if(low!=high){
                      lazy[2*idx+1]+=lazy[idx];
                      lazy[2*idx+2]+=lazy[idx];
                      
                  }
                  lazy[idx]=0;
              }
              
              // l r low high or low high l r 
              if(r< low || high<l)return;
              
              //complete overlap
              //l low high r 
              if(low>=l && r>=high){
                  
                 seg[idx]+=(high-low+1) *val;
                 if(low!=high){
                      lazy[2*idx+1]+=val;
                      lazy[2*idx+2]+=val;
                 }
                return ;
              }
              int mid=(low+high)>>1;
              
                range_update(2*idx+1,low,mid,l,r,val);
                range_update(2*idx+2,mid+1,high,l,r,val);
                
              seg[idx]=seg[2*idx+1]+seg[2*idx+2];
        }
};


int main(){
    int n=5;
    int ar[]={1,1,1,1,1};
    
    SGR sg(n);
    
    sg.build(0,0,n-1,ar);
    
    // cout<<sg.seg[0]<<endl;
    
    
    // cout<<sg.query(0,0,n-1,1,3)<<endl;
    
    // sg.range_update(0,0,n-1,1,3,1);
    
    
    // cout<<sg.query(0,0,n-1,1,3)<<endl;
    
    // sg.range_update(0,0,n-1,1,3,1);
    
    // cout<<sg.query(0,0,n-1,0,4)<<endl;
    
    
    int q;
    cin>>q;
    while(q--){
        
        char t; cin>>t;
        if(t=='u'){
            int val,l,r;
            cin>>l>>r>>val;
            sg.range_update(0,0,n-1,l,r,val);
        }
        else{
            int val,l,r;
            cin>>l>>r;
            cout<<sg.query(0,0,n-1,l,r)<<endl;
            
        }
    }
    
    
}





[[441459,446342],[801308,840640],[871890,963447],[228525,336985],[807945,946787],[479815,507766],[693292,944029],[751962,821744]]

