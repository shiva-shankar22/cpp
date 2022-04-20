#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int n;
    cin>>n;
    vector<vector<int>> v;

    for(int i=0;i<n;i++) {
        vector<int> a(i+1);
        v.push_back(a);
    }

    v[0][0]=1,v[1][0]=1,v[1][1]=1;

    for(int i=2;i<n;i++){

        for(int j=0;j<=i;j++){
            if(j==0 || j==i)v[i][j]=1;
            else{
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
    }

    for(auto &it: v){ 
       for(auto &i :it)
           cout<<i<<" ";
           cout<<endl;
    }
    return 0;
}