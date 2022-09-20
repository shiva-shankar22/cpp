#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findSubstringInWraproundString(string p) {

           int n=p.size();
           
           if(n==0)return 0;
           int ans=0,l=0;
           
           //int mp[26]={0};
           unordered_map<char,int> mp;

           for(auto &it: p)
               mp[it]++;
           for(int i=1;i<n;i++){
             
                
                 while(i<n &&  ((p[i] == 1+p[i-1]) ||  (p[i]=='a' && p[i-1]=='z') ) ){
                    
                     i++;
                 }  
                
                if(i-l==1){
                    l=i;
                     continue;
                }
                if(l<n){  
                 int len= i-l;
                
                  
                  for(int j=l;j<i;j++)cout<<p[j];
                   
                  cout<<endl;

                 cout<<len<<endl;
                 ans += ((len*(len+1))) /2;  
                 ans-=len;
                 l=i;
                  
                }
               
           }


           return ans+mp.size();
    }
};

int isogram(char *input1){
     
     int i=0,cnt=0;

     int caps[26]={0},small[26]={0};
     
     for(i=0;input1[i]!='\0';i++,cnt++){
          if(input1[i]>='A' && input1[i]<='Z')
              caps[input1[i]-'A']++;
          else 
             small[input1[i]-'a']++;    
     }
     
     for(i=0;i<26;i++)
        if(small[i] > 1 || caps[i] > 1)
                 return 0;
    return cnt;
}

int main(){
           
           char ch[]="table";

           cout<<isogram(ch)<<endl;
}