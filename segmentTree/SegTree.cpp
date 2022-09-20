// #include<bits/stdc++.h>
// using namespace std;

// class SGtree{
//   vector<int> seg;
//   public:  
//    SGtree(int n){
//        seg.resize(4*n+1);
//      //seg=new int [ 4 *n+1];
//    }

//   void build(int idx,int low,int high,int arr[]){
//       if(low==high){
//           seg[idx]=arr[low];
//           return ;
//       }

//     int mid=(low+high)>>1;
//     build(2 * idx+1 , low,mid,arr);
//     build(2 * idx+2 ,mid+1,high,arr);
//     seg[idx]=min(seg[idx*2 +1],seg[2*idx+2]);
//   }

//  int query(int idx,int low,int high,int l,int r){
//      //No overlap
//      //l r low high or low high l r
//      if(r < low || l>high)return 1e8;
     
//      //full overlap
//      //[ l  low high r]
  
//     if(low>=l && high<=r)return seg[idx];
     
//      //partial overlap
     
//      int mid=(low+high)>>1;

//      int left=query(2 * idx +1 ,low,mid,l,r);
//      int right=query( 2 * idx+ 2,mid+1,high,l,r);

//   return seg[idx]=min(left,right);
//  }

//  void update(int idx,int low,int high,int i,int val){
//      if(low==high){
//          seg[idx]=val;
//          return ;
//      }
//      int mid=(low+high)>>1;

//      if(i<=mid)
//        update(2 * idx +1 ,low,mid,i,val);
//      else 
//         update(2 * i+2 , mid+1,high,i,val);
//     seg[idx]=min(seg[idx*2 +1],seg[2*idx+2]);
//  }

//  void print(){
//      for(auto &it: seg) 
//         cout<<it<<" ";
//         cout<<endl;
//  } 

// };

// int main(){

//     int n;
//     cin >> n;
//     int ar[n];
//     for(auto &it : ar)cin>>it;
    
//     SGtree st(n);
//     st.build(0,0,n-1,ar);


//     int q ;
//     cin>>q;

//     while( q--){
//         int l,r;
//         cin>>l>>r;
//        cout << st.query(0,0,n-1,l,r)<<endl;
//     }
    
//    // st.print();
// }


// Recap

#include<bits/stdc++.h>
using namespace std;

class SG{
  public:
  vector<int> seg;
  
   SG(int n){
    seg.resize(4*n+1);
    
     
   }

  void build(int idx,int l,int h,vector<int> &ar){
      if(l==h){
        seg[idx]=ar[l];
        return ;
      }
     // cout<<"build"<<endl;
      int mid= (l+h) /2;
       build(2*idx+1,l,mid,ar);
       build(2*idx+2,mid+1,h,ar); 
       seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);
  }



  int query(int idx,int l,int r,int low,int high){
       //no overlap
        // l r  low high    or    low high l r 

        if( r < low || high < l)return 1e9;


       //complete overlap
       // l low high r
       else if(low>=l  && high<=r)return seg[idx];

       // partial over lap
       //
        
                int mid =(high+low) >> 1;
                int left= query(2*idx+1,l,r,low,mid);
                int right = query(2*idx+2,l,r,mid+1,high);
                return seg[idx]= min(left,right);
        
       //return -1;
  }

  void pointUpdate(int idx,int low,int high,int val,int ii){
    if(low==high){
        seg[idx]=val;
        return;
    }
    
    int mid= ( low+high)>>1;

    if(ii<=mid)
         pointUpdate(2*idx+1,low,mid,val,ii);
    else 
          pointUpdate(2*idx+2,mid+1,high,val,ii);
      
    seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);

  }

};



int main(){

  int n;
  cin>>n;
  vector<int> ar(n),ar2(n);
  
  for(int i=0;i<n;i++)cin>>ar[i];
  

   SG sg(n);

   sg.build(0,0,n-1,ar);
  //   cout<<sg.seg[5]<<endl;

      int q ;
   cin>>q;

     
  //  cout<<"build completed"<<endl;
  //  for(int i=0;i<=4*n;i++)
  //     cout<<i<<" ";
  //     cout<<endl;
   for(int i : sg.seg)
      cout<<i<<" ";

    while( q--){
        int l,r;
        cin>>l>>r;
       cout << sg.query(0,l,r,0,n-1)<<endl;
    }


   
  //  cout<<"build completed"<<endl;
  //  for(int i=0;i<=4*n;i++)
  //     cout<<i<<" ";
  //     cout<<endl;
  //  for(int i : sg.seg)
  //     cout<<i<<" ";

  // cout<< sg.query(0,2,4,0,n-1)<<endl<<sg.query(0,1,3,0,n-1)<<endl;

  // for(int i=0;i<n;i++)cin>>ar2[i];

  // SG sg(n),sg2(n);
  //  sg.build(0,0,n-1,ar);
  //  sg2.build(0,0,n-1,ar2);
  // int q;
  //  cin>>q;
  //  while( q--){
  //     int t;
  //     cin>> t;
  //     if(t==1){
  //         int l1,r1,l2,r2;
  //         cin>>l1>>r1>>l2>>r2;
  //         int ans= min(  sg.query(0,l1,r1,0,n-1),sg2.query(0,l2,r2,0,n-1)  );
  //         cout<<ans<<endl;
  //     }

  //     else{ 
  //         int a; cin>>a;
           
  //           int val,id;
  //           cin>>id>>val;;
  //          if(a==1)
  //           sg.pointUpdate(0,0,n-1,val,id);
  //          else sg2.pointUpdate(0,0,n-1,val,id);

  //     }
  //  }


}


/*

8
6 4 2 7 -1 9 1 0
3
0 3
1 4
4 6

    1 4
    2  5

*/