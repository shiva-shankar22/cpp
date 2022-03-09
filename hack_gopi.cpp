#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

vector<int> copyVec(vector<int> &arr,int idx,int x,int y){
    int n=arr.size();
    vector<int> temp;

    for(int i=0;i<n;i++){
        if(i==idx){
            temp.push_back(x);
            temp.push_back(y);
        }
        else temp.push_back(arr[i]);
    }

    return temp;
}


int isNon(vector<int> &arr,int n){
   int idx=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])continue;
        else{
          idx=i;break;
        }
    }
    
    if(idx!=-1){
        cout<<"non decresing at idx "<<idx<<endl;
        for(auto &it : arr)cout<<it<<" ";
       cout<<endl;
    }
    return idx;
}
int main(){
    int n; cin>>n;
    vector<int> arr;
    
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
         
    
    int ans=0;
     //vector<int> temp(n);
     //temp=arr;
   
    int  fg=isNon(arr,n);
     if(fg==-1){
       cout<<ans;return 0;
     }
 int idx=fg;

vector<int> temp;
    while(idx!=-1){
        ans++;
        
        //cout<<" first while "<<" idx = "<< idx<<endl;
        
            int val=arr[idx]; 
          // cout<<" first if "<<" idx = "<< idx<<endl;
         bool flag=false;
            for(int i=val-1;i>=1;i--){
                for(int j=val-1;j>=1;j--){
                    if(i+j==val){
                        cout<<" at idx "<<idx<<" values "<<i<<"  "<<j<<"  "<<endl;
                        temp=copyVec(arr,idx,i,j); 
                        fg=isNon(temp,temp.size()); 
                     // idx=*lidx;
                      if(fg!=-1){ cout<<idx<<" index "<<endl;}
                      if(fg!=-1){
                          idx=fg;arr.clear();
                          arr=temp; 
                          temp.clear(); 
                          flag=true;break;
                      }
                      else{cout<<ans<<endl;return 0;}
                    }
                }
                if(flag)break;
              //  cout<<"second while "<<endl;
            }

        

    }
     cout<<ans<<endl;
}