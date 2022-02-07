#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>

using namespace std;
unordered_map<string,int> mp;

bool wordBreakstring(string str,int n){
   
   if(n==0)return true;
   

   
// code for clarity on substrings     
// for(int i=1,n=str.length();i<=n;i++){
//         string s1=str.substr(0,i);
//         cout<<s1<<endl;
//         string s2=str.substr(i,n);
//         cout<<s2<<endl;
//    }




/* we start with 1 to make sure that partition has made 
   
   in way like  str =shivashankar
     s1= s
     s2= hivashakar
    starting with 1 will ensure this pattern 
    or starting with 0 will leads to infinity loop
*/

   for(int i=1;i<=n;i++){
       string s1=str.substr(0,i);// for checking partition shivashankar will give s 
       string s2=str.substr(i,n);//                          hivashankar            
   
     if(mp[s1]&&wordBreakstring(s2,n-i))return true;
       
   }
   
    return false;
}


int main(){

   vector<string> ar={"i","like"};

    for(auto &it:ar)
        mp[it]++;
    
   string str="ilike";

  
  if(wordBreakstring(str,5))
      cout<<"ok";
  else cout<<"No";

}