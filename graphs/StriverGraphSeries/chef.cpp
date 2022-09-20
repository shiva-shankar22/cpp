#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int t;
     cin >> t;
     while(t--){
         int n;
         cin >> n;
         int ar[n];
         for(int i=0;i<n;i++)cin>>ar[i];

         int cnt=0;
      
          bool fg=true;
           for(int i=0;i<n;i++){

               if(cnt==2)break;
                 
               if(ar[i]!=0){
                   int val=ar[i];
                   while(val--)fg=!fg;
                   cnt++;
               }

           }
            
          if(!fg)
            cout<<"Chef"<<endl;
          else 
            cout<<"Chegina"<<endl;

         }

}

