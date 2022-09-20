#include<bits/stdc++.h>
using namespace std;


struct node{

   public : 
      node* ar[26];

      node(){
        for(int i=0;i<26;i++)ar[i]=nullptr;
      }
      bool fg;
    
     int endWiths=0,prefixWith;
    
    node* getNode(char ch){

        return  ar[ch-'a'];
    }

    void incrementEndsWith(){
        endWiths++;
    }

};




node *root=new node();

void insert(string &s){
    
    node *temp=root;
    int n=s.size();

    for(int i=0;i<n;i++){
         
         if(temp->ar[s[i]-'a']==nullptr){
            
         }
    }  

}


int main(){

    return 0;
}