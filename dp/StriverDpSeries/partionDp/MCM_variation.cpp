#include<bits/stdc++.h>
using namespace std;

vector<string> ds;
void fun(int idx,string &str){
     if(idx==str.size()){
         for(string it: ds)cout<<it<<" ";
         cout<<endl;
         return ;
     }
    //   string s="";
     for(int i=idx;i<str.size();i++){
        string s= str.substr(idx,i-idx+1);
         ds.push_back(s);
         fun(i+1,str); 
         ds.pop_back();
     }

  
}


int main(){
      

//      string str="abcd";
// //               0123456789
//  //   cout<<str.substr(4,9-4+1);
//        fun(0,str);
 int val=3;  double v=val;
 cout<<setprecision(3);
 cout<<fixed<<(v)<<endl;


//   cout<<v<<endl;
}