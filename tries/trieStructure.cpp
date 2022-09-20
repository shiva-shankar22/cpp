#include<bits/stdc++.h>
using namespace std;

struct node{
   public: 
   node *arr[26];
   int endsWith=0,prefixEndsWith=0;
   bool fg;
    node(){
      for(int i=0;i<26;i++)arr[i]=nullptr; 
    }
   bool contains(char ch){
    if(this->arr[ch-'a'])
         return true;
    return false;
   }
   node* nextNode(char ch){
         return arr[ch-'a'];
   }

   void incrementEndsWith(){
    this->endsWith++;
   }

   void incrementprefixEndsWith(){
    this->prefixEndsWith++;
   }

};


node *root=new node();

void insert(string str){
    node *temp=root;
    for(int i=0;i<str.size();i++){

         if(!(temp->arr[str[i]-'a']))
             temp->arr[str[i]-'a']=new node();
    
          temp->incrementprefixEndsWith();
             temp=temp->nextNode(str[i]);
    }

    temp->fg=true;
    temp->incrementEndsWith();
}

int findPrefix(string str){
     int ans=0;
     node *temp=root;
     for(int i=0;i<str.size();i++){
         if(!(temp->arr[str[i]-'a']))return 0;
         ans=temp->prefixEndsWith;
         temp=temp->nextNode(str[i]);

     }
    return ans;
}
int find_contains(string str){
     int ans=0;
     node *temp=root;
     int i;
     for( i=0;i<str.size();i++){
         if(!(temp->arr[str[i]-'a']))break;
      
         temp=temp->nextNode(str[i]);

     }

     ans=temp->endsWith;
    return (i==str.size()) ? ans : 0;
}

void print_trie(string str){
    node *temp=root; string ans="";
    for(int i=0;i<str.size();i++){
    
         if((temp->arr[str[i]-'a']))
              ans+=str[i];
         else
             break;
         temp=temp->nextNode(str[i]);
    }
    
    cout<<ans<<endl;
    
}


int main(){
    

   vector<string> ar={"abc","ab","bc","b"};

   for(auto i: ar)
      insert(i);

    set<string> st;
    // for(auto &it :ar){ 
    //    string temp="";
    //    int ans=0;
    //    for(char ch :it){
    //       temp+=ch;
    //      if(st.find(temp)==st.end()){ 
    //       st.insert(temp);
    //       cout<<temp<<" ";
    //       cout<<findPrefix(temp)<<endl;
    //      }
    //     //  cout<<ans<<" TT ";
    //    }cout<<ans<<" ";
    // }

    cout<<findPrefix("a");

}



