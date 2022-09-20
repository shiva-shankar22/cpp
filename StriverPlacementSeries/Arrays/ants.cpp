#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n,t;
//     cin>>n>>t;
//     map<pair<int,int>,pair<int,int>> mp;
   
//     vector<int> p(n),ants(n),dir(n);
//     for(int i=0;i<n;i++){
//        cin>>ants[i];
//     }
//     for(int i=0;i<n;i++)cin>>dir[i];
   
//     for(int i=0;i<n;i++){
//      //    mp[ants[i]]={i,dir[i]};
//             mp[{i,ants[i]}]={i,dir[i]};
//        //  cout<<ants[i]<<"  "<<i<<"  "<<dir[i]<<endl;
//     }
       
//    while(t--){
       
//        for(auto &it :mp){
//              int aa=it.first.first;
//              int init=it.second.first;
//              int dr=it.second.second;
//              int i=it.first.first;
//             //214 cout<<aa<<" "<<init<<"  "<<dr<<endl;
           
//            //  if(init+dr>=0 && init+dr <n){ 
//             //   cout<<init+dr<<" "<<endl;
//                p[init+dr]+=aa;
//             cout<<init+dr<<endl; 
//             mp[{i,aa}]={init+dr,dr};
            
          
//        }
//      //  for(int i:p)cout<<i<<" ";
//          cout<<"endl"<<endl;
//    }


//     for(int i:p)cout<<i<<" ";
// }





int main(){
     
     map<int,int> mp;
     mp[0]=3;
     mp[-1]=3;
     mp[2]=4;
     mp[1]=4;
     mp[-4]=6;
     for(auto it:mp) 
        cout<<it.first<<" "<<it.second<<endl;

}













