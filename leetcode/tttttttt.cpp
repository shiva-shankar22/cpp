#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string,int> p1,pair<string,int> p2){
    
    return p1.second>p2.second;
}

int main(){
    
    int n,t;
    cin>>n;
    t=n;
    vector<pair<string,int> > arr;
    while(n--){
        int maxi=-1e8;
        string str;
        cin>>str;
        int x;
      for(int i=0;i<6;i++){ 
       cin>>x;
        maxi=max(maxi,x);
      }
       arr.push_back({str,maxi});
     //  cout<<str<<"  "<<maxi<<endl;
    }
     
    // for(auto &it : arr)
      //  cout<<it.first<<" "<<it.second<<endl;

    sort(arr.begin(),arr.end(),comp);

    for(int i=0;i<t;i++)
       cout<<arr[i].first<<endl;  
}