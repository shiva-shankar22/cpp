#include<bits/stdc++.h>
using namespace std;

int main(){
       
       vector<int> arr={10,20,10,10,30,40};
       map<int,int> mp;
       int k=4,n=6;

  for(int i=0;i<k;i++)
       mp[arr[i]]++;

  for(auto &it : mp)
        cout<<it.first<<" ";
        cout<<endl;

        for(int i=0,j=k;j<n;j++,i++){
            cout<<"printing map "<<endl;
            for(auto &it: mp)
                cout<<it.first<<" - "<<it.second<<endl;
                cout<<endl;
            mp[arr[i]]--;
            mp[arr[j]]++;
            for(auto &it:mp)
                if(it.second!=0)
                    cout<<it.first<<" ";
            cout<<endl;
        }


    return 0;
}