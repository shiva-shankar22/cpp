#include<bits/stdc++.h>
using namespace std;

struct node{
    string name;
    int durability,uid;
   
};

bool comp(node &n1,node &n2){
 
     int idx= strcmp(n1.name.c_str(),n2.name.c_str());
     
     if(idx==0){
        return n1.uid<n2.uid;
     }

     return idx < 0;

}
bool compp(node &n1,node &n2){
     
      if(n1.durability ==n2.durability)
        return n1.uid<n2.uid;
    return n1.durability<n2.durability;

}


int main(){
 
    int t;
    cin>>t;
      int tt=1;
    while(t--){
         
         int n;
         cin>>n;
         int cnt=0;
         vector<node> ar(n),temp(n);
          //vector<node> temp1,temp2;
          int cc=0;
         for(node &n1: ar){ 
            cin>>n1.name>>n1.durability>>n1.uid;
            temp[cc].name=n1.name,temp[cc].durability=n1.durability , temp[cc].uid=n1.uid;
            cc++;
         }

          sort(temp.begin(),temp.end(),comp);  sort(ar.begin(),ar.end(),compp);
          
          for(int i=0;i<n;i++)
              if(ar[i].name==temp[i].name && ar[i].durability==temp[i].durability && ar[i].uid==temp[i].uid) 
                 cnt++;
         
          cout<<"Case #"<<tt++<<":"<<cnt<<endl;
         
    }
 
}

