#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    
    int f=0,s=1;
    int p_val=0;
    
    for(int i=0;i<n;i++){
        if(i==0){
          cout<<"1\n";continue;
        }
        for(int j=0;j<=i;j++){
          p_val=s+f;
            cout<<p_val<<" ";
            f=s;
            s=p_val;
            
        }
        cout<<endl;
    }
    
}