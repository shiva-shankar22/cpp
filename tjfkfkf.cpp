#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
  
  struct node{
   public:
    char ch;
    int fre;
    node(char x,int d){
      ch=x;
      fre=d;
    }
  };
    bool comp(node n1,node n2){
       return n1.fre > n2.fre;
   }
    string frequencySort(string s) {
        vector<int> small(26,0),caps(26,0),digi(10,0);
        vector<node> ar;
        
        for(char it : s)
            if(islower(it))
                 small[it-'a']++;
            else if(isupper(it))
                  caps[it-'A']++;
            else digi[it-'0']++;

      for(int i=0;i<26;i++){
           if(small[i]>0)
              ar.push_back(node(i+'a',small[i]));
      }
      
      for(int i=0;i<26;i++){
           if(caps[i]>0)
              ar.push_back(node(i+'A',caps[i]));
      }
      for(int i=0;i<10;i++)
          if(digi[i]>0)
             ar.push_back(node(i+'0',digi[i]));
       sort(ar.begin(),ar.end());
       string ans="";
       for(auto it: ar){
           int times=it.fre;
           char cur=it.ch;
           string cur_s="";
           while(times--)
               cur_s+=cur;
          ans+=cur_s;
       }     
       return ans;
    }
};

int main(){


    string str="rrrrree";
//    priority_queue<pair<char,int>,vector<pair<char,int>>,std::function<bool(pair<char,int>,pair<char,int>)>> pq(comp);

     

}