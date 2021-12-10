#include<bits/stdc++.h>
using namespace std;


void printPoss(string str,string ans,int k){
    
    if(ans.length()==k){
        cout<<ans<<endl;
        return ;
    }

    for(int i=0;i<str.length();i++){
        
        printPoss(str,ans+str[i],k);
    }
        
}

int main(){


  printPoss("ab","",3);

    return 0;
}