#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;

   vector<int> ar(n);
   int fact=1;
   for(int i=1;i<=n;i++){
        fact*=i;
        ar[i-1]=i;
   }
   fact/=n;
   k--;string ans="";
while(true){
   
   ans+= to_string(ar[k/fact]);
   ar.erase(ar.begin()+k/fact);
   if(ar.size()==0)break;
   
   k%=fact;
   fact/=ar.size();
}

cout<<ans<<endl;
}