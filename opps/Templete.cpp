#include<bits/stdc++.h>
using namespace std;

template<typename T> T findMax(T x,T y){
 
    return (x>y)? x: y;
}



vector<int> operator+(vector<int> &a,vector<int> &b){
 
 vector<int> ans;

 for(auto &it :a)
    ans.push_back(it);

 for(auto &it :b)
    ans.push_back(it);
    
    return ans;
}


int main(){
    
 
  vector<int> arr={1,2,3},a={5,6,7};


  vector<int> v= arr+a;
  
  
 for(auto &it :v)
     cout<<it<<" ";
}
