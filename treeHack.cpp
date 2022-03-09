#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data=-1;
    node *left=nullptr,*right=nullptr;

    node(int x){this->data=x; left=nullptr;right=nullptr;}
     
};

node* levelOrder(node *root,vector<int> &arr,int n){
    
  queue<node*> q; int len=arr.size();
  root=new node(arr[n]);
  q.push(root);
    int i=n+1;
  while(!q.empty() ){
     
         node *cur=q.front();
         q.pop();
      if(i<len){ 
         cur->left = new node(arr[i++]);
           q.push(cur->left);
      }p`
      else cur->left=nullptr;
      if(i<len){ 
        cur->right = new node(arr[i++]);
          q.push(cur->right);
      }
      else cur->right=nullptr;
   
       if(i>=len){
          break;
       }
  }
    return root;
}
int isPrime(int n){
    int l=sqrt(n);
   for(int i=2;i<=l;i++)if(n%i==0)return 0;
   return 1;
}
int countPrimes(node *root){
    if(root==nullptr)return 0;
    return ((int)(isPrime(root->data)+countPrimes(root->left)+countPrimes(root->right))); 

}

int BFS(node *root){
    queue<node *> q;int ans=0;q.push(root);
    while(!q.empty()){
        node *cur=q.front();q.pop();
        ans+=countPrimes(cur);
        if(cur->left!=nullptr)q.push(cur->left);
        if(cur->right!=nullptr)q.push(cur->right);
    }
    return ans;
}

int main(){
       vector<int> ar;
       int n;
       cin>>n;
       int k;
       cin>>k;
       for(int i=0;i<n;i++){
           int x;cin>>x;
           ar.push_back(x);
       }
       node *root=nullptr;
      node *temp= levelOrder(root,ar,k);
     root=temp;


   cout<<BFS(root);
}