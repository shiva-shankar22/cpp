#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>

using namespace std;
unordered_map<string,int> mp;

bool wordBreakstring(string str,int n){
   
   if(n==0)return true;

/* 
  we start with 1 to make sure that partition has made 
   
   in way like  str =shivashankar
     s1= s
     s2= hivashakar
    starting with 1 will ensure this pattern 
    or starting with 0 will leads to infinity loop
*/

   for(int i=1;i<=n;i++){
       string s1=str.substr(0,i);// for checking partition shivashankar will give s 
       string s2=str.substr(i,n);//                         s  hivashankar            
   //                                                 next  sh ivashankar
     if(mp[s1]&&wordBreakstring(s2,n-i))return true;
       
   }
   
    return false;
}


int main(){

   vector<string> ar={"apple","pen"};
   //"applepenapple"


    for(auto &it:ar)
        mp[it]++;
    
   string str="applepenapple";

  
  if(wordBreakstring(str,5))
      cout<<"ok";
  else cout<<"No";

}