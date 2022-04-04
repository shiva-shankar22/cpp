#include<bits/stdc++.h>
using namespace std;


int main(){

    string seq,sqq; getline(cin,seq); getline(cin,sqq);

    unordered_map<int,int> mp,mp2;
    string words="",numbers="";
   for(auto &it :seq){  
       if((it>='a'&&it<='z') || it==' '){words+=it;mp[it-'a']++;}
       else if((it>='A'&&it<='Z')){words+=it;mp[it-'A']++;}
       
       else {mp[it]++,numbers+=it;}
      if(mp[it]>1){cout<<"New Language Error"<<endl;return 0;}
   }
   int cnt=0;
   for(auto &it :sqq){  
       if((it>='a'&&it<='z'))mp2[it-'a']++;
       else if((it>='A'&&it<='Z'))mp2[it-'A']++;
       else mp2[it]++;
       if(it==' ')cnt++;
   }
    string ans="";
    for(auto &it :words){
        if(it==' '){ans+=it;cnt--;continue;}
        int val=0;
        if(it>='a' && it<='z') val= mp2[it-'a']; else val=mp2[it-'A'];
        while(val-->0)ans+=it;

    }
   // cout<<numbers<<endl;
    while(cnt--)ans+=' ';
    for(auto &it :numbers){
        if(it==' '){ans+=it;continue;}
        int val= mp2[it];
        while(val--)ans+=it;

    }
   
   cout<<ans;

   
   return 0;  
}