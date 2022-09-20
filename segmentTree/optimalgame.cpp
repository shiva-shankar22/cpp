#include<bits/stdc++.h>
using namespace std;

string tt="";
void convert(string &str,int i,int j){
    int n=str.length();string t="";
    for(int k=0;k<n;k++)
     if(k!=i && k!=j)
     t+=str[k];
     tt=t;
}
bool fun(string &str,int n){
        n=str.length();
    for(int i=0;i<n-1;i++)
       if(str[i]=='0' && str[i+1]=='1' ){
          
          convert(str,i,i+1);
           return true;
       }
return false;
}


bool fun2(string &str,int n){
        n=str.length();
    for(int i=0;i<n-1;i++)
       if(str[i]=='1' && str[i+1]=='0'){
          
           convert(str,i,i+1);
           return true;
       }
return false;
}


int main(){
    
    int t;
    cin>>t;
    while(t--){
        string str;
        int n;
        cin>>n>>str;
       
        
        int cnt=0;
        bool fg=true;
         while(fg){
           if(fun(str,n)){ 
               cnt=(cnt==0)? 1 :0;
           
              str=tt;
           }
          else if(fun2(str,n)){ 
              cnt= (cnt==0)? 1 :0;
              str=tt;
         
          }
          else fg=false;
 
         }
         if(cnt)cout<<"Jhon"<<endl;
         else cout<<"Joe"<<endl;
    }

}